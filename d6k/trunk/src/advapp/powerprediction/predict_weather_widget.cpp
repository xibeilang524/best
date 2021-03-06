#include "predict_weather_widget.h"
#include "predict_custom_delegate.h"


/*! \fn CPredictWeatherView::CPredictWeatherView(QWidget* parent, CPredictItem* pPrdtItem, IMainModuleInterface* pCore)
***********************************************************************************************************************
** \brief   CPredictStationView::CPredictStationView
** \details 构造函数
** \return
** \author  GuoHaijun
** \date    2017年3月30日
** \note
***********************************************************************************************************************/
CPredictWeatherView::CPredictWeatherView(QWidget* parent, CWeatherData* pWeaDatas, IMainModuleInterface* pCore)
	: QMainWindow(parent)
{
	Q_ASSERT(pCore);
	if (!pCore)
	{
		return;
	}

	Q_ASSERT(pWeaDatas);
	if (!pWeaDatas)
	{
		return;
	}

	m_pTable = new CPredictWeatherTable(this, pWeaDatas->m_vecTableInfo);

	m_pTable->setModel(m_pTable->m_pPrdtWeaModel);

	setCentralWidget(m_pTable);
}



/*! \fn CPredictWeatherView::~CPredictWeatherView()
****************************************************************
** \brief   CPredictWeatherView::~CPredictWeatherView
** \details 析构函数
** \return
** \author  GuoHaijun
** \date    2017年3月30日
** \note
***************************************************************/
CPredictWeatherView::~CPredictWeatherView()
{


}



/*! \fn void CPredictWeatherView::Delete()
*******************************************
** \brief   CPredictWeatherView::Delete
** \details 删除
** \return  void
** \author  GuoHaijun
** \date    2017年3月30日
** \note
*******************************************/
void CPredictWeatherView::Delete()
{
	m_pTable->setModel(nullptr);
	deleteLater();
}



/*
void CPredictWeatherView::ShowWidget(CStationData* pStnDatas)
{
m_pPrdtStnModel = new CPredictStationModel(*pStnDatas);

QStringList headList;
headList << "ID" << "Name" << "SelectPoint";
m_pPrdtStnModel->SetHorizontalHeaderList(headList);

m_pPrdtStnModel->SetColumnCount(3);
m_pPrdtStnModel->setHeaderData(0, Qt::Horizontal, "ID");
m_pPrdtStnModel->setHeaderData(1, Qt::Horizontal, "Name");
m_pPrdtStnModel->setHeaderData(2, Qt::Horizontal, "SelectPoint");

m_pPrdtStnModel->SetRowCount(2);

int nRow = m_pPrdtStnModel->rowCount();

for (int i = 0; i < nRow; i++)
{
QModelIndex index = m_pPrdtStnModel->index(i, 0, QModelIndex());

m_pPrdtStnModel->setData(index, i);
}

QModelIndex index_0 = m_pPrdtStnModel->index(0, 1, QModelIndex());

m_pPrdtStnModel->setData(index_0, QString("Active Power"));

QModelIndex index_1 = m_pPrdtStnModel->index(1, 1, QModelIndex());

m_pPrdtStnModel->setData(index_1, QString("InActive Power"));




m_pTable = new CPredictStationTable(this, pStnDatas);

CPredictSelctPointDelegate *pPrdtSelPoint = new CPredictSelctPointDelegate();

m_pTable->setItemDelegateForColumn(2, pPrdtSelPoint);

m_pTable->setModel(m_pPrdtStnModel);

m_pTable->setContextMenuPolicy(Qt::CustomContextMenu);

m_pTable->setSortingEnabled(true);

}*/


