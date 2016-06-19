#pragma once
#include <gmock/gmock.h>
#include "app_interface.h"

class MockApp : public AppInterface {
public:
  MOCK_METHOD0(IsEnableAnalysisTracing, bool());
  MOCK_METHOD0(AnalysisTraceLevel, int());
  MOCK_METHOD0(InExpressAutoPlay, bool());
  MOCK_METHOD0(IsShowCommentIdentifiers, bool());
  MOCK_METHOD0(IsEnableAnalysisDuringHints, bool());
  MOCK_METHOD0(GetConventionPool, std::shared_ptr<ConventionPool>());
  MOCK_METHOD0(GamePts, double());
  MOCK_METHOD0(MajorSuitGamePts, double());
  MOCK_METHOD0(MinorSuitGamePts, double());
  MOCK_METHOD0(NTGamePts, double());
  MOCK_METHOD0(FourthLevelPts, double());
  MOCK_METHOD0(ThirdLevelPts, double());
  MOCK_METHOD0(SecondLevelPts, double());
  MOCK_METHOD0(SlamPts, double());
  MOCK_METHOD0(SmallSlamPts, double());
  MOCK_METHOD0(GrandSlamPts, double());
  MOCK_METHOD0(GetCurrentConventionSet, CConventionSet*());

  MOCK_METHOD0(GetCurrentTrickCardLed, CCard*());
  MOCK_CONST_METHOD1(GetValidBidRecord, int(int index));

  MOCK_METHOD1(DisplayHand, void(Position pos));
  MOCK_METHOD1(SetCurrentModeTemp, void(int mode));
  MOCK_METHOD0(RestoreMode, void());
  MOCK_METHOD1(SuitToSingularString, const char*(int suit));

  MOCK_METHOD1(SetAutoHintDialogHintText, void(CString text));
  MOCK_METHOD1(ShowAnalysisDialog, void(Position position));
  MOCK_METHOD1(HideAnalysisDialog, void(Position position));
  MOCK_METHOD2(SetAnalysisText, void(Position position, CString analysis));

  MOCK_METHOD2(ContractToFullString, const CString(int contract, int modifier));
  MOCK_METHOD1(PositionToString, const char* (int pos));
  MOCK_METHOD1(BidToFullString, const CString(int bid));
};