#include "lauxlib.h"
#include "lua.h"
#include "lualib.h"
#include "imgui.h"
#include "cimgui.h"

int igGetScrollMaxX(lua_State *pl)
{
	float result = igGetScrollMaxX();
	lua_pushnumber(pl,result);
	return 1;
}

int ImGuiSettingsHandler_ImGuiSettingsHandler(lua_State *pl)
{
	return 1;
}

int ImGuiTextBuffer_reserve(lua_State *pl)
{
	ImGuiTextBuffer* self = (ImGuiTextBuffer*)lua_touserdata(pl,1);
	int capacity = (int)lua_tonumber(pl,2);
	return 0;
}

int igCheckboxFlags(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int* flags = (int*)lua_touserdata(pl,2);
	int flags_value = (int)lua_tonumber(pl,3);
	return 1;
}

int igLoadIniSettingsFromMemory(lua_State *pl)
{
	const char* ini_data = lua_tostring(pl,1);
	size_t ini_size = *(size_t*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawList_AddTriangleFilled(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,4);
	ImU32 col = *(ImU32*)lua_touserdata(pl,5);
	return 0;
}

int igTreePop(lua_State *pl)
{
	return 0;
}

int igFindBestWindowPosForPopupEx(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 ref_pos = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,3);
	ImGuiDir* last_dir = (ImGuiDir*)lua_touserdata(pl,4);
	const ImRect r_outer = *(const ImRect*)lua_touserdata(pl,5);
	const ImRect r_avoid = *(const ImRect*)lua_touserdata(pl,6);
	ImGuiPopupPositionPolicy policy = *(ImGuiPopupPositionPolicy*)lua_touserdata(pl,7);
	return 0;
}

int igSliderInt3(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int[3] v = *(int[3]*)lua_touserdata(pl,2);
	int v_min = (int)lua_tonumber(pl,3);
	int v_max = (int)lua_tonumber(pl,4);
	const char* format = lua_tostring(pl,5);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,6);
	return 1;
}

int ImFont_GetCharAdvance(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	ImWchar c = *(ImWchar*)lua_touserdata(pl,2);
	return 1;
}

int igImStristr(lua_State *pl)
{
	const char* haystack = lua_tostring(pl,1);
	const char* haystack_end = lua_tostring(pl,2);
	const char* needle = lua_tostring(pl,3);
	const char* needle_end = lua_tostring(pl,4);
	return 1;
}

int igImFontAtlasBuildMultiplyRectAlpha8(lua_State *pl)
{
	const unsigned char[256] table = *(const unsigned char[256]*)lua_touserdata(pl,1);
	unsigned char* pixels = (unsigned char*)lua_touserdata(pl,2);
	int x = (int)lua_tonumber(pl,3);
	int y = (int)lua_tonumber(pl,4);
	int w = (int)lua_tonumber(pl,5);
	int h = (int)lua_tonumber(pl,6);
	int stride = (int)lua_tonumber(pl,7);
	return 0;
}

int igSaveIniSettingsToMemory(lua_State *pl)
{
	size_t* out_ini_size = (size_t*)lua_touserdata(pl,1);
	return 1;
}

int igRenderMouseCursor(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	ImVec2 pos = *(ImVec2*)lua_touserdata(pl,2);
	float scale = *(float*)lua_touserdata(pl,3);
	ImGuiMouseCursor mouse_cursor = *(ImGuiMouseCursor*)lua_touserdata(pl,4);
	ImU32 col_fill = *(ImU32*)lua_touserdata(pl,5);
	ImU32 col_border = *(ImU32*)lua_touserdata(pl,6);
	ImU32 col_shadow = *(ImU32*)lua_touserdata(pl,7);
	return 0;
}

int ImGuiNextWindowData_ClearFlags(lua_State *pl)
{
	ImGuiNextWindowData* self = (ImGuiNextWindowData*)lua_touserdata(pl,1);
	return 0;
}

int igImTextCountUtf8BytesFromStr(lua_State *pl)
{
	const ImWchar* in_text = (const ImWchar*)lua_touserdata(pl,1);
	const ImWchar* in_text_end = (const ImWchar*)lua_touserdata(pl,2);
	return 1;
}

int igEndMenuBar(lua_State *pl)
{
	return 0;
}

int igGetBackgroundDrawList(lua_State *pl)
{
	return 1;
}

int igImFileLoadToMemory(lua_State *pl)
{
	const char* filename = lua_tostring(pl,1);
	const char* mode = lua_tostring(pl,2);
	size_t* out_file_size = (size_t*)lua_touserdata(pl,3);
	int padding_bytes = (int)lua_tonumber(pl,4);
	return 1;
}

int ImDrawList__OnChangedTextureID(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawDataBuilder_Clear(lua_State *pl)
{
	ImDrawDataBuilder* self = (ImDrawDataBuilder*)lua_touserdata(pl,1);
	return 0;
}

int igImInvLength(lua_State *pl)
{
	const ImVec2 lhs = *(const ImVec2*)lua_touserdata(pl,1);
	float fail_value = *(float*)lua_touserdata(pl,2);
	return 1;
}

int igPlotHistogram(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const float* values = (const float*)lua_touserdata(pl,2);
	int values_count = (int)lua_tonumber(pl,3);
	int values_offset = (int)lua_tonumber(pl,4);
	const char* overlay_text = lua_tostring(pl,5);
	float scale_min = *(float*)lua_touserdata(pl,6);
	float scale_max = *(float*)lua_touserdata(pl,7);
	ImVec2 graph_size = *(ImVec2*)lua_touserdata(pl,8);
	int stride = (int)lua_tonumber(pl,9);
	return 0;
}

int ImDrawList_AddCircle(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 center = *(const ImVec2*)lua_touserdata(pl,2);
	float radius = *(float*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	int num_segments = (int)lua_tonumber(pl,5);
	float thickness = *(float*)lua_touserdata(pl,6);
	return 0;
}

int ImVec2ih_ImVec2ih(lua_State *pl)
{
	return 1;
}

int ImDrawList_PrimVtx(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 uv = *(const ImVec2*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	return 0;
}

int ImGuiListClipperRange_FromPositions(lua_State *pl)
{
	float y1 = *(float*)lua_touserdata(pl,1);
	float y2 = *(float*)lua_touserdata(pl,2);
	int off_min = (int)lua_tonumber(pl,3);
	int off_max = (int)lua_tonumber(pl,4);
	return 1;
}

int ImGuiWindow_MenuBarRect(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	ImGuiWindow* self = (ImGuiWindow*)lua_touserdata(pl,2);
	return 0;
}

int ImSpanAllocator_ImSpanAllocator(lua_State *pl)
{
	return 1;
}

int igGetWindowDockNode(lua_State *pl)
{
	return 1;
}

int ImGuiTableTempData_destroy(lua_State *pl)
{
	ImGuiTableTempData* self = (ImGuiTableTempData*)lua_touserdata(pl,1);
	return 0;
}

int ImRect_ClipWithFull(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	const ImRect r = *(const ImRect*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawData_destroy(lua_State *pl)
{
	ImDrawData* self = (ImDrawData*)lua_touserdata(pl,1);
	return 0;
}

int ImFontAtlas_GetCustomRectByIndex(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	int index = (int)lua_tonumber(pl,2);
	return 1;
}

int igRemoveContextHook(lua_State *pl)
{
	ImGuiContext* context = (ImGuiContext*)lua_touserdata(pl,1);
	ImGuiID hook_to_remove = *(ImGuiID*)lua_touserdata(pl,2);
	return 0;
}

int ImFontAtlas_AddFontFromMemoryCompressedBase85TTF(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	const char* compressed_font_data_base85 = lua_tostring(pl,2);
	float size_pixels = *(float*)lua_touserdata(pl,3);
	const ImFontConfig* font_cfg = (const ImFontConfig*)lua_touserdata(pl,4);
	const ImWchar* glyph_ranges = (const ImWchar*)lua_touserdata(pl,5);
	return 1;
}

int igColorEdit3(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[3] col = *(float[3]*)lua_touserdata(pl,2);
	ImGuiColorEditFlags flags = *(ImGuiColorEditFlags*)lua_touserdata(pl,3);
	return 1;
}

int igIsKeyReleased(lua_State *pl)
{
	int user_key_index = (int)lua_tonumber(pl,1);
	return 1;
}

int ImRect_TranslateX(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	float dx = *(float*)lua_touserdata(pl,2);
	return 0;
}

int ImFontAtlas_ClearInputData(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 0;
}

int igDebugNodeWindowsListByBeginStackParent(lua_State *pl)
{
	ImGuiWindow** windows = (ImGuiWindow**)lua_touserdata(pl,1);
	int windows_size = (int)lua_tonumber(pl,2);
	ImGuiWindow* parent_in_begin_stack = (ImGuiWindow*)lua_touserdata(pl,3);
	return 0;
}

int igSetActiveID(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,2);
	return 0;
}

int igDragInt3(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int[3] v = *(int[3]*)lua_touserdata(pl,2);
	float v_speed = *(float*)lua_touserdata(pl,3);
	int v_min = (int)lua_tonumber(pl,4);
	int v_max = (int)lua_tonumber(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,7);
	return 1;
}

int igRenderRectFilledRangeH(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	const ImRect rect = *(const ImRect*)lua_touserdata(pl,2);
	ImU32 col = *(ImU32*)lua_touserdata(pl,3);
	float x_start_norm = *(float*)lua_touserdata(pl,4);
	float x_end_norm = *(float*)lua_touserdata(pl,5);
	float rounding = *(float*)lua_touserdata(pl,6);
	return 0;
}

int igTableSetColumnWidth(lua_State *pl)
{
	int column_n = (int)lua_tonumber(pl,1);
	float width = *(float*)lua_touserdata(pl,2);
	return 0;
}

int igStyleColorsDark(lua_State *pl)
{
	ImGuiStyle* dst = (ImGuiStyle*)lua_touserdata(pl,1);
	return 0;
}

int ImFont_GrowIndex(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	int new_size = (int)lua_tonumber(pl,2);
	return 0;
}

int igPushFont(lua_State *pl)
{
	ImFont* font = (ImFont*)lua_touserdata(pl,1);
	return 0;
}

int igShowStackToolWindow(lua_State *pl)
{
	bool* p_open = (bool*)lua_touserdata(pl,1);
	return 0;
}

int igBringWindowToDisplayBack(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiTableColumnSettings_ImGuiTableColumnSettings(lua_State *pl)
{
	return 1;
}

int ImGuiTextFilter_ImGuiTextFilter(lua_State *pl)
{
	const char* default_filter = lua_tostring(pl,1);
	return 1;
}

int ImBitVector_TestBit(lua_State *pl)
{
	ImBitVector* self = (ImBitVector*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 1;
}

int igSetFocusID(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,2);
	return 0;
}

int igImModPositive(lua_State *pl)
{
	int a = (int)lua_tonumber(pl,1);
	int b = (int)lua_tonumber(pl,2);
	return 1;
}

int igImBezierCubicCalc(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 p4 = *(const ImVec2*)lua_touserdata(pl,5);
	float t = *(float*)lua_touserdata(pl,6);
	return 0;
}

int igEndListBox(lua_State *pl)
{
	return 0;
}

int igImMax(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 lhs = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 rhs = *(const ImVec2*)lua_touserdata(pl,3);
	return 0;
}

int igGetFrameHeightWithSpacing(lua_State *pl)
{
	return 1;
}

int ImGuiDockNode_IsDockSpace(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int igImTextCharToUtf8(lua_State *pl)
{
	char[5] out_buf = *(char[5]*)lua_touserdata(pl,1);
	unsigned int c = *(unsigned int*)lua_touserdata(pl,2);
	return 1;
}

int igGetDragDropPayload(lua_State *pl)
{
	return 1;
}

int ImGuiComboPreviewData_ImGuiComboPreviewData(lua_State *pl)
{
	return 1;
}

int igPushColumnClipRect(lua_State *pl)
{
	int column_index = (int)lua_tonumber(pl,1);
	return 0;
}

int igColorPicker3(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[3] col = *(float[3]*)lua_touserdata(pl,2);
	ImGuiColorEditFlags flags = *(ImGuiColorEditFlags*)lua_touserdata(pl,3);
	return 1;
}

int igSameLine(lua_State *pl)
{
	float offset_from_start_x = *(float*)lua_touserdata(pl,1);
	float spacing = *(float*)lua_touserdata(pl,2);
	return 0;
}

int igImBitArraySetBit(lua_State *pl)
{
	ImU32* arr = (ImU32*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 0;
}

int igImRotate(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 v = *(const ImVec2*)lua_touserdata(pl,2);
	float cos_a = *(float*)lua_touserdata(pl,3);
	float sin_a = *(float*)lua_touserdata(pl,4);
	return 0;
}

int igTableGetColumnWidthAuto(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	ImGuiTableColumn* column = (ImGuiTableColumn*)lua_touserdata(pl,2);
	return 1;
}

int igShrinkWidths(lua_State *pl)
{
	ImGuiShrinkWidthItem* items = (ImGuiShrinkWidthItem*)lua_touserdata(pl,1);
	int count = (int)lua_tonumber(pl,2);
	float width_excess = *(float*)lua_touserdata(pl,3);
	return 0;
}

int ImRect_ToVec4(lua_State *pl)
{
	ImVec4* pOut = (ImVec4*)lua_touserdata(pl,1);
	ImRect* self = (ImRect*)lua_touserdata(pl,2);
	return 0;
}

int igBeginDragDropTarget(lua_State *pl)
{
	return 1;
}

int igBeginTable(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	int column = (int)lua_tonumber(pl,2);
	ImGuiTableFlags flags = *(ImGuiTableFlags*)lua_touserdata(pl,3);
	const ImVec2 outer_size = *(const ImVec2*)lua_touserdata(pl,4);
	float inner_width = *(float*)lua_touserdata(pl,5);
	return 1;
}

int igGetFont(lua_State *pl)
{
	return 1;
}

int igDebugNodeFont(lua_State *pl)
{
	ImFont* font = (ImFont*)lua_touserdata(pl,1);
	return 0;
}

int igImFileClose(lua_State *pl)
{
	ImFileHandle file = *(ImFileHandle*)lua_touserdata(pl,1);
	return 1;
}

int igCalcWrapWidthForPos(lua_State *pl)
{
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,1);
	float wrap_pos_x = *(float*)lua_touserdata(pl,2);
	return 1;
}

int igGetTopMostAndVisiblePopupModal(lua_State *pl)
{
	return 1;
}

int igGetTextLineHeight(lua_State *pl)
{
	return 1;
}

int igBeginDisabled(lua_State *pl)
{
	bool disabled = lua_toboolean(pl,1);
	return 0;
}

int igBeginPopup(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	ImGuiWindowFlags flags = *(ImGuiWindowFlags*)lua_touserdata(pl,2);
	return 1;
}

int ImDrawList_AddCallback(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	ImDrawCallback callback = *(ImDrawCallback*)lua_touserdata(pl,2);
	void* callback_data = (void*)lua_touserdata(pl,3);
	return 0;
}

int ImRect_Floor(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	return 0;
}

int igIsMouseReleased(lua_State *pl)
{
	ImGuiMouseButton button = *(ImGuiMouseButton*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiPlatformMonitor_destroy(lua_State *pl)
{
	ImGuiPlatformMonitor* self = (ImGuiPlatformMonitor*)lua_touserdata(pl,1);
	return 0;
}

int ImFontAtlas_GetGlyphRangesVietnamese(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int igGetWindowAlwaysWantOwnTabBar(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawList_PathClear(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int ImVec1_ImVec1(lua_State *pl)
{
	return 1;
}

int ImVec4_ImVec4(lua_State *pl)
{
	return 1;
}

int ImGuiStackTool_ImGuiStackTool(lua_State *pl)
{
	return 1;
}

int igRenderPlatformWindowsDefault(lua_State *pl)
{
	void* platform_render_arg = (void*)lua_touserdata(pl,1);
	void* renderer_render_arg = (void*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiPlatformIO_destroy(lua_State *pl)
{
	ImGuiPlatformIO* self = (ImGuiPlatformIO*)lua_touserdata(pl,1);
	return 0;
}

int igSetNextWindowBgAlpha(lua_State *pl)
{
	float alpha = *(float*)lua_touserdata(pl,1);
	return 0;
}

int ImVector_ImVector(lua_State *pl)
{
	return 1;
}

int igSpacing(lua_State *pl)
{
	return 0;
}

int ImFontGlyphRangesBuilder_AddChar(lua_State *pl)
{
	ImFontGlyphRangesBuilder* self = (ImFontGlyphRangesBuilder*)lua_touserdata(pl,1);
	ImWchar c = *(ImWchar*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiWindow_TitleBarRect(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	ImGuiWindow* self = (ImGuiWindow*)lua_touserdata(pl,2);
	return 0;
}

int ImFontAtlas_IsBuilt(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int igIsMouseDragging(lua_State *pl)
{
	ImGuiMouseButton button = *(ImGuiMouseButton*)lua_touserdata(pl,1);
	float lock_threshold = *(float*)lua_touserdata(pl,2);
	return 1;
}

int ImVector_max_size(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 1;
}

int ImFont_FindGlyph(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	ImWchar c = *(ImWchar*)lua_touserdata(pl,2);
	return 1;
}

int ImPool_Clear(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	return 0;
}

int igSetWindowPos(lua_State *pl)
{
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,1);
	ImGuiCond cond = *(ImGuiCond*)lua_touserdata(pl,2);
	return 0;
}

int igSetItemDefaultFocus(lua_State *pl)
{
	return 0;
}

int ImGuiStorage_SetBool(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	bool val = lua_toboolean(pl,3);
	return 0;
}

int igPopStyleColor(lua_State *pl)
{
	int count = (int)lua_tonumber(pl,1);
	return 0;
}

int ImGuiMenuColumns_destroy(lua_State *pl)
{
	ImGuiMenuColumns* self = (ImGuiMenuColumns*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiDockNode_ImGuiDockNode(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 1;
}

int ImVec4_destroy(lua_State *pl)
{
	ImVec4* self = (ImVec4*)lua_touserdata(pl,1);
	return 0;
}

int igUpdatePlatformWindows(lua_State *pl)
{
	return 0;
}

int ImFont_IsGlyphRangeUnused(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	unsigned int c_begin = *(unsigned int*)lua_touserdata(pl,2);
	unsigned int c_last = *(unsigned int*)lua_touserdata(pl,3);
	return 1;
}

int igDebugNodeWindow(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	const char* label = lua_tostring(pl,2);
	return 0;
}

int ImFontAtlas_AddFont(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	const ImFontConfig* font_cfg = (const ImFontConfig*)lua_touserdata(pl,2);
	return 1;
}

int ImRect_Overlaps(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	const ImRect r = *(const ImRect*)lua_touserdata(pl,2);
	return 1;
}

int igCalcTypematicRepeatAmount(lua_State *pl)
{
	float t0 = *(float*)lua_touserdata(pl,1);
	float t1 = *(float*)lua_touserdata(pl,2);
	float repeat_delay = *(float*)lua_touserdata(pl,3);
	float repeat_rate = *(float*)lua_touserdata(pl,4);
	return 1;
}

int igTableNextRow(lua_State *pl)
{
	ImGuiTableRowFlags row_flags = *(ImGuiTableRowFlags*)lua_touserdata(pl,1);
	float min_row_height = *(float*)lua_touserdata(pl,2);
	return 0;
}

int igStyleColorsClassic(lua_State *pl)
{
	ImGuiStyle* dst = (ImGuiStyle*)lua_touserdata(pl,1);
	return 0;
}

int igCallContextHooks(lua_State *pl)
{
	ImGuiContext* context = (ImGuiContext*)lua_touserdata(pl,1);
	ImGuiContextHookType type = *(ImGuiContextHookType*)lua_touserdata(pl,2);
	return 0;
}

int igDataTypeApplyOp(lua_State *pl)
{
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,1);
	int op = (int)lua_tonumber(pl,2);
	void* output = (void*)lua_touserdata(pl,3);
	const void* arg_1 = (const void*)lua_touserdata(pl,4);
	const void* arg_2 = (const void*)lua_touserdata(pl,5);
	return 0;
}

int igScrollbarEx(lua_State *pl)
{
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	ImGuiAxis axis = *(ImGuiAxis*)lua_touserdata(pl,3);
	ImS64* p_scroll_v = (ImS64*)lua_touserdata(pl,4);
	ImS64 avail_v = *(ImS64*)lua_touserdata(pl,5);
	ImS64 contents_v = *(ImS64*)lua_touserdata(pl,6);
	ImDrawFlags flags = *(ImDrawFlags*)lua_touserdata(pl,7);
	return 1;
}

int igDockBuilderRemoveNodeChildNodes(lua_State *pl)
{
	ImGuiID node_id = *(ImGuiID*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList_AddRectFilled(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p_min = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p_max = *(const ImVec2*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	float rounding = *(float*)lua_touserdata(pl,5);
	ImDrawFlags flags = *(ImDrawFlags*)lua_touserdata(pl,6);
	return 0;
}

int ImGuiNextItemData_ClearFlags(lua_State *pl)
{
	ImGuiNextItemData* self = (ImGuiNextItemData*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiDockNode_IsNoTabBar(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiInputTextState_CursorClamp(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 0;
}

int igImStrdupcpy(lua_State *pl)
{
	char* dst = (char*)lua_touserdata(pl,1);
	size_t* p_dst_size = (size_t*)lua_touserdata(pl,2);
	const char* str = lua_tostring(pl,3);
	return 1;
}

int igTableResetSettings(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igGetColumnsID(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	int count = (int)lua_tonumber(pl,2);
	return 1;
}

int igIsRectVisible(lua_State *pl)
{
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,1);
	return 1;
}

int ImChunkStream_chunk_size(lua_State *pl)
{
	ImChunkStream* self = (ImChunkStream*)lua_touserdata(pl,1);
	const T* p = (const T*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiWindow_CalcFontSize(lua_State *pl)
{
	ImGuiWindow* self = (ImGuiWindow*)lua_touserdata(pl,1);
	return 1;
}

int ImFontConfig_destroy(lua_State *pl)
{
	ImFontConfig* self = (ImFontConfig*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiOldColumnData_destroy(lua_State *pl)
{
	ImGuiOldColumnData* self = (ImGuiOldColumnData*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiStorage_Clear(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	return 0;
}

int igSetWindowDock(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiID dock_id = *(ImGuiID*)lua_touserdata(pl,2);
	ImGuiCond cond = *(ImGuiCond*)lua_touserdata(pl,3);
	return 0;
}

int ImFontAtlas_destroy(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 0;
}

int igTableSettingsCreate(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	int columns_count = (int)lua_tonumber(pl,2);
	return 1;
}

int ImDrawList_PushClipRectFullScreen(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int ImVector_index_from_ptr(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	const T* it = (const T*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiIO_AddInputCharacterUTF16(lua_State *pl)
{
	ImGuiIO* self = (ImGuiIO*)lua_touserdata(pl,1);
	ImWchar16 c = *(ImWchar16*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiWindow_MenuBarHeight(lua_State *pl)
{
	ImGuiWindow* self = (ImGuiWindow*)lua_touserdata(pl,1);
	return 1;
}

int igGetColumnsCount(lua_State *pl)
{
	return 1;
}

int ImDrawList_PathBezierCubicCurveTo(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p4 = *(const ImVec2*)lua_touserdata(pl,4);
	int num_segments = (int)lua_tonumber(pl,5);
	return 0;
}

int ImFontAtlas_GetTexDataAsAlpha8(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	unsigned char** out_pixels = (unsigned char**)lua_touserdata(pl,2);
	int* out_width = (int*)lua_touserdata(pl,3);
	int* out_height = (int*)lua_touserdata(pl,4);
	int* out_bytes_per_pixel = (int*)lua_touserdata(pl,5);
	return 0;
}

int igBeginPopupEx(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiWindowFlags extra_flags = *(ImGuiWindowFlags*)lua_touserdata(pl,2);
	return 1;
}

int igUnindent(lua_State *pl)
{
	float indent_w = *(float*)lua_touserdata(pl,1);
	return 0;
}

int igPopAllowKeyboardFocus(lua_State *pl)
{
	return 0;
}

int igImFormatString(lua_State *pl)
{
	char* buf = (char*)lua_touserdata(pl,1);
	size_t buf_size = *(size_t*)lua_touserdata(pl,2);
	const char* fmt = lua_tostring(pl,3);
	... ... = *(...*)lua_touserdata(pl,4);
	return 1;
}

int igValue(lua_State *pl)
{
	const char* prefix = lua_tostring(pl,1);
	bool b = lua_toboolean(pl,2);
	return 0;
}

int ImFontAtlas_GetGlyphRangesKorean(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int igInputTextWithHint(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const char* hint = lua_tostring(pl,2);
	char* buf = (char*)lua_touserdata(pl,3);
	size_t buf_size = *(size_t*)lua_touserdata(pl,4);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,5);
	ImGuiInputTextCallback callback = *(ImGuiInputTextCallback*)lua_touserdata(pl,6);
	void* user_data = (void*)lua_touserdata(pl,7);
	return 1;
}

int igMemFree(lua_State *pl)
{
	void* ptr = (void*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiWindow_ImGuiWindow(lua_State *pl)
{
	ImGuiContext* context = (ImGuiContext*)lua_touserdata(pl,1);
	const char* name = lua_tostring(pl,2);
	return 1;
}

int igFindWindowSettings(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 1;
}

int ImFont_AddGlyph(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	const ImFontConfig* src_cfg = (const ImFontConfig*)lua_touserdata(pl,2);
	ImWchar c = *(ImWchar*)lua_touserdata(pl,3);
	float x0 = *(float*)lua_touserdata(pl,4);
	float y0 = *(float*)lua_touserdata(pl,5);
	float x1 = *(float*)lua_touserdata(pl,6);
	float y1 = *(float*)lua_touserdata(pl,7);
	float u0 = *(float*)lua_touserdata(pl,8);
	float v0 = *(float*)lua_touserdata(pl,9);
	float u1 = *(float*)lua_touserdata(pl,10);
	float v1 = *(float*)lua_touserdata(pl,11);
	float advance_x = *(float*)lua_touserdata(pl,12);
	return 0;
}

int igGetDrawData(lua_State *pl)
{
	return 1;
}

int igIsActiveIdUsingKey(lua_State *pl)
{
	ImGuiKey key = *(ImGuiKey*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawListSplitter_Split(lua_State *pl)
{
	ImDrawListSplitter* self = (ImDrawListSplitter*)lua_touserdata(pl,1);
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,2);
	int count = (int)lua_tonumber(pl,3);
	return 0;
}

int igSetCursorPosY(lua_State *pl)
{
	float local_y = *(float*)lua_touserdata(pl,1);
	return 0;
}

int ImPool_GetBufSize(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawDataBuilder_GetDrawListCount(lua_State *pl)
{
	ImDrawDataBuilder* self = (ImDrawDataBuilder*)lua_touserdata(pl,1);
	return 1;
}

int igTextColoredV(lua_State *pl)
{
	const ImVec4 col = *(const ImVec4*)lua_touserdata(pl,1);
	const char* fmt = lua_tostring(pl,2);
	va_list args = *(va_list*)lua_touserdata(pl,3);
	return 0;
}

int igImHashData(lua_State *pl)
{
	const void* data = (const void*)lua_touserdata(pl,1);
	size_t data_size = *(size_t*)lua_touserdata(pl,2);
	ImU32 seed = *(ImU32*)lua_touserdata(pl,3);
	return 1;
}

int igBringWindowToFocusFront(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 0;
}

int igBeginChildFrame(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,2);
	ImGuiWindowFlags flags = *(ImGuiWindowFlags*)lua_touserdata(pl,3);
	return 1;
}

int igSetNextItemWidth(lua_State *pl)
{
	float item_width = *(float*)lua_touserdata(pl,1);
	return 0;
}

int igTableRemove(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igTableEndRow(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igTableBeginInitMemory(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	int columns_count = (int)lua_tonumber(pl,2);
	return 0;
}

int igPopButtonRepeat(lua_State *pl)
{
	return 0;
}

int ImRect_Translate(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	const ImVec2 d = *(const ImVec2*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawList_AddBezierQuadratic(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,4);
	ImU32 col = *(ImU32*)lua_touserdata(pl,5);
	float thickness = *(float*)lua_touserdata(pl,6);
	int num_segments = (int)lua_tonumber(pl,7);
	return 0;
}

int igTreePush(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	return 0;
}

int ImGuiPayload_IsDelivery(lua_State *pl)
{
	ImGuiPayload* self = (ImGuiPayload*)lua_touserdata(pl,1);
	return 1;
}

int igStartMouseMovingWindowOrNode(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiDockNode* node = (ImGuiDockNode*)lua_touserdata(pl,2);
	bool undock_floating_node = lua_toboolean(pl,3);
	return 0;
}

int ImFontGlyphRangesBuilder_AddRanges(lua_State *pl)
{
	ImFontGlyphRangesBuilder* self = (ImFontGlyphRangesBuilder*)lua_touserdata(pl,1);
	const ImWchar* ranges = (const ImWchar*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiDockNode_IsCentralNode(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int igIsItemActivated(lua_State *pl)
{
	return 1;
}

int igNavMoveRequestButNoResultYet(lua_State *pl)
{
	return 1;
}

int igGetStateStorage(lua_State *pl)
{
	return 1;
}

int igGcCompactTransientMiscBuffers(lua_State *pl)
{
	return 0;
}

int ImSpan_end(lua_State *pl)
{
	ImSpan* self = (ImSpan*)lua_touserdata(pl,1);
	return 1;
}

int igDragInt2(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int[2] v = *(int[2]*)lua_touserdata(pl,2);
	float v_speed = *(float*)lua_touserdata(pl,3);
	int v_min = (int)lua_tonumber(pl,4);
	int v_max = (int)lua_tonumber(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,7);
	return 1;
}

int igSaveIniSettingsToDisk(lua_State *pl)
{
	const char* ini_filename = lua_tostring(pl,1);
	return 0;
}

int ImDrawList_PrimQuadUV(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 a = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 b = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 c = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 d = *(const ImVec2*)lua_touserdata(pl,5);
	const ImVec2 uv_a = *(const ImVec2*)lua_touserdata(pl,6);
	const ImVec2 uv_b = *(const ImVec2*)lua_touserdata(pl,7);
	const ImVec2 uv_c = *(const ImVec2*)lua_touserdata(pl,8);
	const ImVec2 uv_d = *(const ImVec2*)lua_touserdata(pl,9);
	ImU32 col = *(ImU32*)lua_touserdata(pl,10);
	return 0;
}

int igDockContextNewFrameUpdateDocking(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int igGetItemStatusFlags(lua_State *pl)
{
	return 1;
}

int igIsAnyMouseDown(lua_State *pl)
{
	return 1;
}

int igScrollToRectEx(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,2);
	const ImRect rect = *(const ImRect*)lua_touserdata(pl,3);
	ImGuiScrollFlags flags = *(ImGuiScrollFlags*)lua_touserdata(pl,4);
	return 0;
}

int ImGuiPopupData_ImGuiPopupData(lua_State *pl)
{
	return 1;
}

int igDragInt4(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int[4] v = *(int[4]*)lua_touserdata(pl,2);
	float v_speed = *(float*)lua_touserdata(pl,3);
	int v_min = (int)lua_tonumber(pl,4);
	int v_max = (int)lua_tonumber(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,7);
	return 1;
}

int ImGuiInputTextCallbackData_InsertChars(lua_State *pl)
{
	ImGuiInputTextCallbackData* self = (ImGuiInputTextCallbackData*)lua_touserdata(pl,1);
	int pos = (int)lua_tonumber(pl,2);
	const char* text = lua_tostring(pl,3);
	const char* text_end = lua_tostring(pl,4);
	return 0;
}

int igPopItemFlag(lua_State *pl)
{
	return 0;
}

int igInputText(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	char* buf = (char*)lua_touserdata(pl,2);
	size_t buf_size = *(size_t*)lua_touserdata(pl,3);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,4);
	ImGuiInputTextCallback callback = *(ImGuiInputTextCallback*)lua_touserdata(pl,5);
	void* user_data = (void*)lua_touserdata(pl,6);
	return 1;
}

int ImFontAtlas_AddCustomRectRegular(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	int width = (int)lua_tonumber(pl,2);
	int height = (int)lua_tonumber(pl,3);
	return 1;
}

int ImGuiNavItemData_ImGuiNavItemData(lua_State *pl)
{
	return 1;
}

int igTabBarCloseTab(lua_State *pl)
{
	ImGuiTabBar* tab_bar = (ImGuiTabBar*)lua_touserdata(pl,1);
	ImGuiTabItem* tab = (ImGuiTabItem*)lua_touserdata(pl,2);
	return 0;
}

int igIsItemEdited(lua_State *pl)
{
	return 1;
}

int igShowStyleSelector(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	return 1;
}

int ImFontAtlas_GetGlyphRangesDefault(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawList_AddPolyline(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2* points = (const ImVec2*)lua_touserdata(pl,2);
	int num_points = (int)lua_tonumber(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	ImDrawFlags flags = *(ImDrawFlags*)lua_touserdata(pl,5);
	float thickness = *(float*)lua_touserdata(pl,6);
	return 0;
}

int ImDrawList__CalcCircleAutoSegmentCount(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	float radius = *(float*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiTableTempData_ImGuiTableTempData(lua_State *pl)
{
	return 1;
}

int igGetMouseCursor(lua_State *pl)
{
	return 1;
}

int ImGuiIO_ClearInputCharacters(lua_State *pl)
{
	ImGuiIO* self = (ImGuiIO*)lua_touserdata(pl,1);
	return 0;
}

int ImVector_size(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiDockNode_UpdateMergedFlags(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawData_ScaleClipRects(lua_State *pl)
{
	ImDrawData* self = (ImDrawData*)lua_touserdata(pl,1);
	const ImVec2 fb_scale = *(const ImVec2*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiIO_destroy(lua_State *pl)
{
	ImGuiIO* self = (ImGuiIO*)lua_touserdata(pl,1);
	return 0;
}

int ImPool_GetAliveCount(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	return 1;
}

int igDebugNodeWindowSettings(lua_State *pl)
{
	ImGuiWindowSettings* settings = (ImGuiWindowSettings*)lua_touserdata(pl,1);
	return 0;
}

int igDockNodeEndAmendTabBar(lua_State *pl)
{
	return 0;
}

int igImLengthSqr(lua_State *pl)
{
	const ImVec2 lhs = *(const ImVec2*)lua_touserdata(pl,1);
	return 1;
}

int igBeginTabBarEx(lua_State *pl)
{
	ImGuiTabBar* tab_bar = (ImGuiTabBar*)lua_touserdata(pl,1);
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,2);
	ImGuiTabBarFlags flags = *(ImGuiTabBarFlags*)lua_touserdata(pl,3);
	ImGuiDockNode* dock_node = (ImGuiDockNode*)lua_touserdata(pl,4);
	return 1;
}

int igIsKeyDown(lua_State *pl)
{
	int user_key_index = (int)lua_tonumber(pl,1);
	return 1;
}

int igRenderArrowDockMenu(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	ImVec2 p_min = *(ImVec2*)lua_touserdata(pl,2);
	float sz = *(float*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	return 0;
}

int igMemAlloc(lua_State *pl)
{
	size_t size = *(size_t*)lua_touserdata(pl,1);
	return 1;
}

int igDragFloatRange2(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float* v_current_min = (float*)lua_touserdata(pl,2);
	float* v_current_max = (float*)lua_touserdata(pl,3);
	float v_speed = *(float*)lua_touserdata(pl,4);
	float v_min = *(float*)lua_touserdata(pl,5);
	float v_max = *(float*)lua_touserdata(pl,6);
	const char* format = lua_tostring(pl,7);
	const char* format_max = lua_tostring(pl,8);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,9);
	return 1;
}

int igTabBarQueueReorder(lua_State *pl)
{
	ImGuiTabBar* tab_bar = (ImGuiTabBar*)lua_touserdata(pl,1);
	const ImGuiTabItem* tab = (const ImGuiTabItem*)lua_touserdata(pl,2);
	int offset = (int)lua_tonumber(pl,3);
	return 0;
}

int ImFont_RenderChar(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,2);
	float size = *(float*)lua_touserdata(pl,3);
	ImVec2 pos = *(ImVec2*)lua_touserdata(pl,4);
	ImU32 col = *(ImU32*)lua_touserdata(pl,5);
	ImWchar c = *(ImWchar*)lua_touserdata(pl,6);
	return 0;
}

int igGetID(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	return 1;
}

int igDockBuilderCopyWindowSettings(lua_State *pl)
{
	const char* src_name = lua_tostring(pl,1);
	const char* dst_name = lua_tostring(pl,2);
	return 0;
}

int igDockBuilderGetCentralNode(lua_State *pl)
{
	ImGuiID node_id = *(ImGuiID*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiDockNode_IsFloatingNode(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int igDataTypeFormatString(lua_State *pl)
{
	char* buf = (char*)lua_touserdata(pl,1);
	int buf_size = (int)lua_tonumber(pl,2);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,3);
	const void* p_data = (const void*)lua_touserdata(pl,4);
	const char* format = lua_tostring(pl,5);
	return 1;
}

int igImBezierQuadraticCalc(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,4);
	float t = *(float*)lua_touserdata(pl,5);
	return 0;
}

int igBeginComboPreview(lua_State *pl)
{
	return 1;
}

int ImDrawList_CloneOutput(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 1;
}

int igTableBeginRow(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igEndDragDropTarget(lua_State *pl)
{
	return 0;
}

int ImGuiTabItem_ImGuiTabItem(lua_State *pl)
{
	return 1;
}

int igGetWindowResizeCornerID(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 1;
}

int igBeginDragDropSource(lua_State *pl)
{
	ImGuiDragDropFlags flags = *(ImGuiDragDropFlags*)lua_touserdata(pl,1);
	return 1;
}

int igTextWrapped(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	... ... = *(...*)lua_touserdata(pl,2);
	return 0;
}

int igImBitArrayClearBit(lua_State *pl)
{
	ImU32* arr = (ImU32*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 0;
}

int ImGuiContextHook_destroy(lua_State *pl)
{
	ImGuiContextHook* self = (ImGuiContextHook*)lua_touserdata(pl,1);
	return 0;
}

int igTextDisabled(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	... ... = *(...*)lua_touserdata(pl,2);
	return 0;
}

int igGetWindowScrollbarRect(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,2);
	ImGuiAxis axis = *(ImGuiAxis*)lua_touserdata(pl,3);
	return 0;
}

int igTableSortSpecsSanitize(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int ImFontAtlas_GetGlyphRangesJapanese(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int igSetTooltipV(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	va_list args = *(va_list*)lua_touserdata(pl,2);
	return 0;
}

int ImPool_GetIndex(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	const T* p = (const T*)lua_touserdata(pl,2);
	return 1;
}

int igIsWindowDocked(lua_State *pl)
{
	return 1;
}

int igGetItemRectMax(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igDockContextEndFrame(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int igNavMoveRequestResolveWithLastItem(lua_State *pl)
{
	ImGuiNavItemData* result = (ImGuiNavItemData*)lua_touserdata(pl,1);
	return 0;
}

int igSliderScalarN(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,2);
	void* p_data = (void*)lua_touserdata(pl,3);
	int components = (int)lua_tonumber(pl,4);
	const void* p_min = (const void*)lua_touserdata(pl,5);
	const void* p_max = (const void*)lua_touserdata(pl,6);
	const char* format = lua_tostring(pl,7);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,8);
	return 1;
}

int ImGuiTableSortSpecs_ImGuiTableSortSpecs(lua_State *pl)
{
	return 1;
}

int ImGuiLastItemData_destroy(lua_State *pl)
{
	ImGuiLastItemData* self = (ImGuiLastItemData*)lua_touserdata(pl,1);
	return 0;
}

int igDebugNodeViewport(lua_State *pl)
{
	ImGuiViewportP* viewport = (ImGuiViewportP*)lua_touserdata(pl,1);
	return 0;
}

int ImPool_Contains(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	const T* p = (const T*)lua_touserdata(pl,2);
	return 1;
}

int ImDrawList_AddNgon(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 center = *(const ImVec2*)lua_touserdata(pl,2);
	float radius = *(float*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	int num_segments = (int)lua_tonumber(pl,5);
	float thickness = *(float*)lua_touserdata(pl,6);
	return 0;
}

int ImGuiListClipper_End(lua_State *pl)
{
	ImGuiListClipper* self = (ImGuiListClipper*)lua_touserdata(pl,1);
	return 0;
}

int igBeginDockableDragDropSource(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 0;
}

int igEndDisabled(lua_State *pl)
{
	return 0;
}

int igDebugRenderViewportThumbnail(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	ImGuiViewportP* viewport = (ImGuiViewportP*)lua_touserdata(pl,2);
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,3);
	return 0;
}

int igFindWindowDisplayIndex(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiOnceUponAFrame_ImGuiOnceUponAFrame(lua_State *pl)
{
	return 1;
}

int igMenuItem(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const char* shortcut = lua_tostring(pl,2);
	bool selected = lua_toboolean(pl,3);
	bool enabled = lua_toboolean(pl,4);
	return 1;
}

int igShowUserGuide(lua_State *pl)
{
	return 0;
}

int ImFontAtlas_ImFontAtlas(lua_State *pl)
{
	return 1;
}

int ImGuiTextBuffer_ImGuiTextBuffer(lua_State *pl)
{
	return 1;
}

int igImIsPowerOfTwo(lua_State *pl)
{
	int v = (int)lua_tonumber(pl,1);
	return 1;
}

int igTabItemButton(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	ImGuiTabItemFlags flags = *(ImGuiTabItemFlags*)lua_touserdata(pl,2);
	return 1;
}

int igImHashStr(lua_State *pl)
{
	const char* data = lua_tostring(pl,1);
	size_t data_size = *(size_t*)lua_touserdata(pl,2);
	ImU32 seed = *(ImU32*)lua_touserdata(pl,3);
	return 1;
}

int igEndTabItem(lua_State *pl)
{
	return 0;
}

int igDebugNodeTableSettings(lua_State *pl)
{
	ImGuiTableSettings* settings = (ImGuiTableSettings*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiTextRange_empty(lua_State *pl)
{
	ImGuiTextRange* self = (ImGuiTextRange*)lua_touserdata(pl,1);
	return 1;
}

int igDragFloat3(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[3] v = *(float[3]*)lua_touserdata(pl,2);
	float v_speed = *(float*)lua_touserdata(pl,3);
	float v_min = *(float*)lua_touserdata(pl,4);
	float v_max = *(float*)lua_touserdata(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,7);
	return 1;
}

int igGetHoveredID(lua_State *pl)
{
	return 1;
}

int ImVector_capacity(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 1;
}

int ImFont_GetDebugName(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiListClipper_Step(lua_State *pl)
{
	ImGuiListClipper* self = (ImGuiListClipper*)lua_touserdata(pl,1);
	return 1;
}

int igGetFocusID(lua_State *pl)
{
	return 1;
}

int igImTextCountCharsFromUtf8(lua_State *pl)
{
	const char* in_text = lua_tostring(pl,1);
	const char* in_text_end = lua_tostring(pl,2);
	return 1;
}

int igPushMultiItemsWidths(lua_State *pl)
{
	int components = (int)lua_tonumber(pl,1);
	float width_full = *(float*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawList_AddConvexPolyFilled(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2* points = (const ImVec2*)lua_touserdata(pl,2);
	int num_points = (int)lua_tonumber(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	return 0;
}

int igBeginViewportSideBar(lua_State *pl)
{
	const char* name = lua_tostring(pl,1);
	ImGuiViewport* viewport = (ImGuiViewport*)lua_touserdata(pl,2);
	ImGuiDir dir = *(ImGuiDir*)lua_touserdata(pl,3);
	float size = *(float*)lua_touserdata(pl,4);
	ImGuiWindowFlags window_flags = *(ImGuiWindowFlags*)lua_touserdata(pl,5);
	return 1;
}

int igItemAdd(lua_State *pl)
{
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	const ImRect* nav_bb = (const ImRect*)lua_touserdata(pl,3);
	ImGuiItemFlags extra_flags = *(ImGuiItemFlags*)lua_touserdata(pl,4);
	return 1;
}

int igSliderScalar(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,2);
	void* p_data = (void*)lua_touserdata(pl,3);
	const void* p_min = (const void*)lua_touserdata(pl,4);
	const void* p_max = (const void*)lua_touserdata(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,7);
	return 1;
}

int igIsWindowAbove(lua_State *pl)
{
	ImGuiWindow* potential_above = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiWindow* potential_below = (ImGuiWindow*)lua_touserdata(pl,2);
	return 1;
}

int ImColor_ImColor(lua_State *pl)
{
	return 1;
}

int igIsAnyItemHovered(lua_State *pl)
{
	return 1;
}

int igImClamp(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 v = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 mn = *(const ImVec2*)lua_touserdata(pl,3);
	ImVec2 mx = *(ImVec2*)lua_touserdata(pl,4);
	return 0;
}

int igActivateItem(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 0;
}

int igNewLine(lua_State *pl)
{
	return 0;
}

int igTableHeader(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	return 0;
}

int igSetTabItemClosed(lua_State *pl)
{
	const char* tab_or_docked_window_label = lua_tostring(pl,1);
	return 0;
}

int ImRect_GetWidth(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	return 1;
}

int igPopClipRect(lua_State *pl)
{
	return 0;
}

int igImFormatStringV(lua_State *pl)
{
	char* buf = (char*)lua_touserdata(pl,1);
	size_t buf_size = *(size_t*)lua_touserdata(pl,2);
	const char* fmt = lua_tostring(pl,3);
	va_list args = *(va_list*)lua_touserdata(pl,4);
	return 1;
}

int igDragScalarN(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,2);
	void* p_data = (void*)lua_touserdata(pl,3);
	int components = (int)lua_tonumber(pl,4);
	float v_speed = *(float*)lua_touserdata(pl,5);
	const void* p_min = (const void*)lua_touserdata(pl,6);
	const void* p_max = (const void*)lua_touserdata(pl,7);
	const char* format = lua_tostring(pl,8);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,9);
	return 1;
}

int igImTextCharFromUtf8(lua_State *pl)
{
	unsigned int* out_char = (unsigned int*)lua_touserdata(pl,1);
	const char* in_text = lua_tostring(pl,2);
	const char* in_text_end = lua_tostring(pl,3);
	return 1;
}

int ImDrawList_AddImageQuad(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	ImTextureID user_texture_id = *(ImTextureID*)lua_touserdata(pl,2);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,5);
	const ImVec2 p4 = *(const ImVec2*)lua_touserdata(pl,6);
	const ImVec2 uv1 = *(const ImVec2*)lua_touserdata(pl,7);
	const ImVec2 uv2 = *(const ImVec2*)lua_touserdata(pl,8);
	const ImVec2 uv3 = *(const ImVec2*)lua_touserdata(pl,9);
	const ImVec2 uv4 = *(const ImVec2*)lua_touserdata(pl,10);
	ImU32 col = *(ImU32*)lua_touserdata(pl,11);
	return 0;
}

int igDockBuilderCopyNode(lua_State *pl)
{
	ImGuiID src_node_id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiID dst_node_id = *(ImGuiID*)lua_touserdata(pl,2);
	ImVector_ImGuiID* out_node_remap_pairs = (ImVector_ImGuiID*)lua_touserdata(pl,3);
	return 0;
}

int igRenderFrameBorder(lua_State *pl)
{
	ImVec2 p_min = *(ImVec2*)lua_touserdata(pl,1);
	ImVec2 p_max = *(ImVec2*)lua_touserdata(pl,2);
	float rounding = *(float*)lua_touserdata(pl,3);
	return 0;
}

int igImTriangleContainsPoint(lua_State *pl)
{
	const ImVec2 a = *(const ImVec2*)lua_touserdata(pl,1);
	const ImVec2 b = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 c = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p = *(const ImVec2*)lua_touserdata(pl,4);
	return 1;
}

int ImFont_FindGlyphNoFallback(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	ImWchar c = *(ImWchar*)lua_touserdata(pl,2);
	return 1;
}

int igDragBehavior(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,2);
	void* p_v = (void*)lua_touserdata(pl,3);
	float v_speed = *(float*)lua_touserdata(pl,4);
	const void* p_min = (const void*)lua_touserdata(pl,5);
	const void* p_max = (const void*)lua_touserdata(pl,6);
	const char* format = lua_tostring(pl,7);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,8);
	return 1;
}

int igGetActiveID(lua_State *pl)
{
	return 1;
}

int igDockNodeBeginAmendTabBar(lua_State *pl)
{
	ImGuiDockNode* node = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int ImBitArray_ClearAllBits(lua_State *pl)
{
	ImBitArray* self = (ImBitArray*)lua_touserdata(pl,1);
	return 0;
}

int igPushButtonRepeat(lua_State *pl)
{
	bool repeat = lua_toboolean(pl,1);
	return 0;
}

int ImGuiTable_ImGuiTable(lua_State *pl)
{
	return 1;
}

int igTableGetColumnName(lua_State *pl)
{
	int column_n = (int)lua_tonumber(pl,1);
	return 1;
}

int igPushColumnsBackground(lua_State *pl)
{
	return 0;
}

int igSliderBehavior(lua_State *pl)
{
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,3);
	void* p_v = (void*)lua_touserdata(pl,4);
	const void* p_min = (const void*)lua_touserdata(pl,5);
	const void* p_max = (const void*)lua_touserdata(pl,6);
	const char* format = lua_tostring(pl,7);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,8);
	ImRect* out_grab_bb = (ImRect*)lua_touserdata(pl,9);
	return 1;
}

int igDragFloat4(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[4] v = *(float[4]*)lua_touserdata(pl,2);
	float v_speed = *(float*)lua_touserdata(pl,3);
	float v_min = *(float*)lua_touserdata(pl,4);
	float v_max = *(float*)lua_touserdata(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,7);
	return 1;
}

int igBeginMenuBar(lua_State *pl)
{
	return 1;
}

int igGetContentRegionMaxAbs(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igInputTextEx(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const char* hint = lua_tostring(pl,2);
	char* buf = (char*)lua_touserdata(pl,3);
	int buf_size = (int)lua_tonumber(pl,4);
	const ImVec2 size_arg = *(const ImVec2*)lua_touserdata(pl,5);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,6);
	ImGuiInputTextCallback callback = *(ImGuiInputTextCallback*)lua_touserdata(pl,7);
	void* user_data = (void*)lua_touserdata(pl,8);
	return 1;
}

int igOpenPopup(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	ImGuiPopupFlags popup_flags = *(ImGuiPopupFlags*)lua_touserdata(pl,2);
	return 0;
}

int ImFontAtlas_AddCustomRectFontGlyph(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	ImFont* font = (ImFont*)lua_touserdata(pl,2);
	ImWchar id = *(ImWchar*)lua_touserdata(pl,3);
	int width = (int)lua_tonumber(pl,4);
	int height = (int)lua_tonumber(pl,5);
	float advance_x = *(float*)lua_touserdata(pl,6);
	const ImVec2 offset = *(const ImVec2*)lua_touserdata(pl,7);
	return 1;
}

int ImVector_back(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiPayload_Clear(lua_State *pl)
{
	ImGuiPayload* self = (ImGuiPayload*)lua_touserdata(pl,1);
	return 0;
}

int igDebugNodeColumns(lua_State *pl)
{
	ImGuiOldColumns* columns = (ImGuiOldColumns*)lua_touserdata(pl,1);
	return 0;
}

int igTableGetRowIndex(lua_State *pl)
{
	return 1;
}

int igColorConvertFloat4ToU32(lua_State *pl)
{
	const ImVec4 in = *(const ImVec4*)lua_touserdata(pl,1);
	return 1;
}

int igEndDragDropSource(lua_State *pl)
{
	return 0;
}

int ImGuiWindow_TitleBarHeight(lua_State *pl)
{
	ImGuiWindow* self = (ImGuiWindow*)lua_touserdata(pl,1);
	return 1;
}

int igGetStyleColorName(lua_State *pl)
{
	ImGuiCol idx = *(ImGuiCol*)lua_touserdata(pl,1);
	return 1;
}

int igPushItemFlag(lua_State *pl)
{
	ImGuiItemFlags option = *(ImGuiItemFlags*)lua_touserdata(pl,1);
	bool enabled = lua_toboolean(pl,2);
	return 0;
}

int igTableUpdateBorders(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igGetStyleColorVec4(lua_State *pl)
{
	ImGuiCol idx = *(ImGuiCol*)lua_touserdata(pl,1);
	return 1;
}

int igImTriangleBarycentricCoords(lua_State *pl)
{
	const ImVec2 a = *(const ImVec2*)lua_touserdata(pl,1);
	const ImVec2 b = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 c = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p = *(const ImVec2*)lua_touserdata(pl,4);
	float* out_u = (float*)lua_touserdata(pl,5);
	float* out_v = (float*)lua_touserdata(pl,6);
	float* out_w = (float*)lua_touserdata(pl,7);
	return 0;
}

int ImGuiStorage_SetAllInt(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	int val = (int)lua_tonumber(pl,2);
	return 0;
}

int igGetWindowContentRegionMax(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList_PrimUnreserve(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	int idx_count = (int)lua_tonumber(pl,2);
	int vtx_count = (int)lua_tonumber(pl,3);
	return 0;
}

int ImGuiTextBuffer_clear(lua_State *pl)
{
	ImGuiTextBuffer* self = (ImGuiTextBuffer*)lua_touserdata(pl,1);
	return 0;
}

int igDebugDrawItemRect(lua_State *pl)
{
	ImU32 col = *(ImU32*)lua_touserdata(pl,1);
	return 0;
}

int ImFontGlyphRangesBuilder_GetBit(lua_State *pl)
{
	ImFontGlyphRangesBuilder* self = (ImFontGlyphRangesBuilder*)lua_touserdata(pl,1);
	size_t n = *(size_t*)lua_touserdata(pl,2);
	return 1;
}

int igTableSetupDrawChannels(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int ImVector_swap(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	ImVector* rhs = (ImVector*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawListSplitter_ClearFreeMemory(lua_State *pl)
{
	ImDrawListSplitter* self = (ImDrawListSplitter*)lua_touserdata(pl,1);
	return 0;
}

int igIsKeyPressed(lua_State *pl)
{
	int user_key_index = (int)lua_tonumber(pl,1);
	bool repeat = lua_toboolean(pl,2);
	return 1;
}

int ImFontAtlas_Build(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int igGetInputTextState(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 1;
}

int igLogToFile(lua_State *pl)
{
	int auto_open_depth = (int)lua_tonumber(pl,1);
	const char* filename = lua_tostring(pl,2);
	return 0;
}

int igSetNextWindowContentSize(lua_State *pl)
{
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int ImFontAtlas_SetTexID(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	ImTextureID id = *(ImTextureID*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawList_PushClipRect(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	ImVec2 clip_rect_min = *(ImVec2*)lua_touserdata(pl,2);
	ImVec2 clip_rect_max = *(ImVec2*)lua_touserdata(pl,3);
	bool intersect_with_current_clip_rect = lua_toboolean(pl,4);
	return 0;
}

int igInitialize(lua_State *pl)
{
	ImGuiContext* context = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int igTableGcCompactSettings(lua_State *pl)
{
	return 0;
}

int igColorConvertRGBtoHSV(lua_State *pl)
{
	float r = *(float*)lua_touserdata(pl,1);
	float g = *(float*)lua_touserdata(pl,2);
	float b = *(float*)lua_touserdata(pl,3);
	float* out_h = (float*)lua_touserdata(pl,4);
	float* out_s = (float*)lua_touserdata(pl,5);
	float* out_v = (float*)lua_touserdata(pl,6);
	return 0;
}

int igEndTable(lua_State *pl)
{
	return 0;
}

int ImGuiTextFilter_destroy(lua_State *pl)
{
	ImGuiTextFilter* self = (ImGuiTextFilter*)lua_touserdata(pl,1);
	return 0;
}

int igIsItemToggledSelection(lua_State *pl)
{
	return 1;
}

int igGetFontSize(lua_State *pl)
{
	return 1;
}

int ImGuiTableSettings_GetColumnSettings(lua_State *pl)
{
	ImGuiTableSettings* self = (ImGuiTableSettings*)lua_touserdata(pl,1);
	return 1;
}

int igImGetDirQuadrantFromDelta(lua_State *pl)
{
	float dx = *(float*)lua_touserdata(pl,1);
	float dy = *(float*)lua_touserdata(pl,2);
	return 1;
}

int igPopFocusScope(lua_State *pl)
{
	return 0;
}

int ImRect_ClipWith(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	const ImRect r = *(const ImRect*)lua_touserdata(pl,2);
	return 0;
}

int ImVec1_destroy(lua_State *pl)
{
	ImVec1* self = (ImVec1*)lua_touserdata(pl,1);
	return 0;
}

int ImPool_GetMapSize(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	return 1;
}

int igStartMouseMovingWindow(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 0;
}

int igBeginColumns(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	int count = (int)lua_tonumber(pl,2);
	ImGuiOldColumnFlags flags = *(ImGuiOldColumnFlags*)lua_touserdata(pl,3);
	return 0;
}

int igImTextStrToUtf8(lua_State *pl)
{
	char* out_buf = (char*)lua_touserdata(pl,1);
	int out_buf_size = (int)lua_tonumber(pl,2);
	const ImWchar* in_text = (const ImWchar*)lua_touserdata(pl,3);
	const ImWchar* in_text_end = (const ImWchar*)lua_touserdata(pl,4);
	return 1;
}

int igSetHoveredID(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 0;
}

int igLogSetNextTextDecoration(lua_State *pl)
{
	const char* prefix = lua_tostring(pl,1);
	const char* suffix = lua_tostring(pl,2);
	return 0;
}

int igAddContextHook(lua_State *pl)
{
	ImGuiContext* context = (ImGuiContext*)lua_touserdata(pl,1);
	const ImGuiContextHook* hook = (const ImGuiContextHook*)lua_touserdata(pl,2);
	return 1;
}

int igCaptureKeyboardFromApp(lua_State *pl)
{
	bool want_capture_keyboard_value = lua_toboolean(pl,1);
	return 0;
}

int igGetWindowContentRegionMin(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igSetScrollX(lua_State *pl)
{
	float scroll_x = *(float*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiWindow_GetIDNoKeepAlive(lua_State *pl)
{
	ImGuiWindow* self = (ImGuiWindow*)lua_touserdata(pl,1);
	const char* str = lua_tostring(pl,2);
	const char* str_end = lua_tostring(pl,3);
	return 1;
}

int igSetScrollFromPosX(lua_State *pl)
{
	float local_x = *(float*)lua_touserdata(pl,1);
	float center_x_ratio = *(float*)lua_touserdata(pl,2);
	return 0;
}

int igShowDemoWindow(lua_State *pl)
{
	bool* p_open = (bool*)lua_touserdata(pl,1);
	return 0;
}

int ImSpanAllocator_Reserve(lua_State *pl)
{
	ImSpanAllocator* self = (ImSpanAllocator*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	size_t sz = *(size_t*)lua_touserdata(pl,3);
	int a = (int)lua_tonumber(pl,4);
	return 0;
}

int igPopID(lua_State *pl)
{
	return 0;
}

int igIsWindowAppearing(lua_State *pl)
{
	return 1;
}

int ImGuiInputTextState_GetCursorPos(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 1;
}

int igCheckbox(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	bool* v = (bool*)lua_touserdata(pl,2);
	return 1;
}

int igMenuItemEx(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const char* icon = lua_tostring(pl,2);
	const char* shortcut = lua_tostring(pl,3);
	bool selected = lua_toboolean(pl,4);
	bool enabled = lua_toboolean(pl,5);
	return 1;
}

int ImGuiTextBuffer_appendfv(lua_State *pl)
{
	ImGuiTextBuffer* self = (ImGuiTextBuffer*)lua_touserdata(pl,1);
	const char* fmt = lua_tostring(pl,2);
	va_list args = *(va_list*)lua_touserdata(pl,3);
	return 0;
}

int ImGuiInputTextState_HasSelection(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiTextFilter_Clear(lua_State *pl)
{
	ImGuiTextFilter* self = (ImGuiTextFilter*)lua_touserdata(pl,1);
	return 0;
}

int igBringWindowToDisplayFront(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 0;
}

int ImRect_TranslateY(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	float dy = *(float*)lua_touserdata(pl,2);
	return 0;
}

int igGetStyle(lua_State *pl)
{
	return 1;
}

int igBeginPopupContextVoid(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	ImGuiPopupFlags popup_flags = *(ImGuiPopupFlags*)lua_touserdata(pl,2);
	return 1;
}

int igImCharIsBlankA(lua_State *pl)
{
	char c = *(char*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawListSplitter_Clear(lua_State *pl)
{
	ImDrawListSplitter* self = (ImDrawListSplitter*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList_PrimReserve(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	int idx_count = (int)lua_tonumber(pl,2);
	int vtx_count = (int)lua_tonumber(pl,3);
	return 0;
}

int ImGuiTextRange_split(lua_State *pl)
{
	ImGuiTextRange* self = (ImGuiTextRange*)lua_touserdata(pl,1);
	char separator = *(char*)lua_touserdata(pl,2);
	ImVector_ImGuiTextRange* out = (ImVector_ImGuiTextRange*)lua_touserdata(pl,3);
	return 0;
}

int ImDrawListSplitter_Merge(lua_State *pl)
{
	ImDrawListSplitter* self = (ImDrawListSplitter*)lua_touserdata(pl,1);
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,2);
	return 0;
}

int igDragFloat(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float* v = (float*)lua_touserdata(pl,2);
	float v_speed = *(float*)lua_touserdata(pl,3);
	float v_min = *(float*)lua_touserdata(pl,4);
	float v_max = *(float*)lua_touserdata(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,7);
	return 1;
}

int igImageButtonEx(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	ImTextureID texture_id = *(ImTextureID*)lua_touserdata(pl,2);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 uv0 = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 uv1 = *(const ImVec2*)lua_touserdata(pl,5);
	const ImVec2 padding = *(const ImVec2*)lua_touserdata(pl,6);
	const ImVec4 bg_col = *(const ImVec4*)lua_touserdata(pl,7);
	const ImVec4 tint_col = *(const ImVec4*)lua_touserdata(pl,8);
	return 1;
}

int igDestroyPlatformWindows(lua_State *pl)
{
	return 0;
}

int igIsItemHovered(lua_State *pl)
{
	ImGuiHoveredFlags flags = *(ImGuiHoveredFlags*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawList_AddRect(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p_min = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p_max = *(const ImVec2*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	float rounding = *(float*)lua_touserdata(pl,5);
	ImDrawFlags flags = *(ImDrawFlags*)lua_touserdata(pl,6);
	float thickness = *(float*)lua_touserdata(pl,7);
	return 0;
}

int igGetColumnOffset(lua_State *pl)
{
	int column_index = (int)lua_tonumber(pl,1);
	return 1;
}

int igIsAnyItemActive(lua_State *pl)
{
	return 1;
}

int igImSign(lua_State *pl)
{
	float x = *(float*)lua_touserdata(pl,1);
	return 1;
}

int igColorPickerOptionsPopup(lua_State *pl)
{
	const float* ref_col = (const float*)lua_touserdata(pl,1);
	ImGuiColorEditFlags flags = *(ImGuiColorEditFlags*)lua_touserdata(pl,2);
	return 0;
}

int ImVector_find(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	const T v = *(const T*)lua_touserdata(pl,2);
	return 1;
}

int igDebugNodeDrawCmdShowMeshAndBoundingBox(lua_State *pl)
{
	ImDrawList* out_draw_list = (ImDrawList*)lua_touserdata(pl,1);
	const ImDrawList* draw_list = (const ImDrawList*)lua_touserdata(pl,2);
	const ImDrawCmd* draw_cmd = (const ImDrawCmd*)lua_touserdata(pl,3);
	bool show_mesh = lua_toboolean(pl,4);
	bool show_aabb = lua_toboolean(pl,5);
	return 0;
}

int ImGuiDockNode_IsSplitNode(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int igBeginDocked(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	bool* p_open = (bool*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiInputTextState_ClearFreeMemory(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 0;
}

int igEndGroup(lua_State *pl)
{
	return 0;
}

int igPopFont(lua_State *pl)
{
	return 0;
}

int ImGuiPayload_IsPreview(lua_State *pl)
{
	ImGuiPayload* self = (ImGuiPayload*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiStorage_GetVoidPtrRef(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	void* default_val = (void*)lua_touserdata(pl,3);
	return 1;
}

int igImStrncpy(lua_State *pl)
{
	char* dst = (char*)lua_touserdata(pl,1);
	const char* src = lua_tostring(pl,2);
	size_t count = *(size_t*)lua_touserdata(pl,3);
	return 0;
}

int igImageButton(lua_State *pl)
{
	ImTextureID user_texture_id = *(ImTextureID*)lua_touserdata(pl,1);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 uv0 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 uv1 = *(const ImVec2*)lua_touserdata(pl,4);
	int frame_padding = (int)lua_tonumber(pl,5);
	const ImVec4 bg_col = *(const ImVec4*)lua_touserdata(pl,6);
	const ImVec4 tint_col = *(const ImVec4*)lua_touserdata(pl,7);
	return 1;
}

int igDockContextClearNodes(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	ImGuiID root_id = *(ImGuiID*)lua_touserdata(pl,2);
	bool clear_settings_refs = lua_toboolean(pl,3);
	return 0;
}

int ImPool_Remove(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	const T* p = (const T*)lua_touserdata(pl,3);
	return 0;
}

int igBeginTooltip(lua_State *pl)
{
	return 0;
}

int igIsItemDeactivated(lua_State *pl)
{
	return 1;
}

int igImFontAtlasBuildSetupFont(lua_State *pl)
{
	ImFontAtlas* atlas = (ImFontAtlas*)lua_touserdata(pl,1);
	ImFont* font = (ImFont*)lua_touserdata(pl,2);
	ImFontConfig* font_config = (ImFontConfig*)lua_touserdata(pl,3);
	float ascent = *(float*)lua_touserdata(pl,4);
	float descent = *(float*)lua_touserdata(pl,5);
	return 0;
}

int igKeepAliveID(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 0;
}

int igImFontAtlasGetBuilderForStbTruetype(lua_State *pl)
{
	return 1;
}

int ImGuiTableSettings_ImGuiTableSettings(lua_State *pl)
{
	return 1;
}

int igBringWindowToDisplayBehind(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiWindow* above_window = (ImGuiWindow*)lua_touserdata(pl,2);
	return 0;
}

int igIsItemToggledOpen(lua_State *pl)
{
	return 1;
}

int igImMul(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 lhs = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 rhs = *(const ImVec2*)lua_touserdata(pl,3);
	return 0;
}

int ImVector_find_erase(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	const T v = *(const T*)lua_touserdata(pl,2);
	return 1;
}

int igColorConvertHSVtoRGB(lua_State *pl)
{
	float h = *(float*)lua_touserdata(pl,1);
	float s = *(float*)lua_touserdata(pl,2);
	float v = *(float*)lua_touserdata(pl,3);
	float* out_r = (float*)lua_touserdata(pl,4);
	float* out_g = (float*)lua_touserdata(pl,5);
	float* out_b = (float*)lua_touserdata(pl,6);
	return 0;
}

int igPlotEx(lua_State *pl)
{
	ImGuiPlotType plot_type = *(ImGuiPlotType*)lua_touserdata(pl,1);
	const char* label = lua_tostring(pl,2);
	float(*)(void* data,int idx) values_getter = (float(*)(void* data,int idx))lua_touserdata(pl,3);
	void* data = (void*)lua_touserdata(pl,4);
	int values_count = (int)lua_tonumber(pl,5);
	int values_offset = (int)lua_tonumber(pl,6);
	const char* overlay_text = lua_tostring(pl,7);
	float scale_min = *(float*)lua_touserdata(pl,8);
	float scale_max = *(float*)lua_touserdata(pl,9);
	ImVec2 frame_size = *(ImVec2*)lua_touserdata(pl,10);
	return 1;
}

int igIsNavInputTest(lua_State *pl)
{
	ImGuiNavInput n = *(ImGuiNavInput*)lua_touserdata(pl,1);
	ImGuiInputReadMode rm = *(ImGuiInputReadMode*)lua_touserdata(pl,2);
	return 1;
}

int igImFontAtlasBuildRender8bppRectFromString(lua_State *pl)
{
	ImFontAtlas* atlas = (ImFontAtlas*)lua_touserdata(pl,1);
	int x = (int)lua_tonumber(pl,2);
	int y = (int)lua_tonumber(pl,3);
	int w = (int)lua_tonumber(pl,4);
	int h = (int)lua_tonumber(pl,5);
	const char* in_str = lua_tostring(pl,6);
	char in_marker_char = *(char*)lua_touserdata(pl,7);
	unsigned char in_marker_pixel_value = *(unsigned char*)lua_touserdata(pl,8);
	return 0;
}

int igRenderRectFilledWithHole(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	ImRect outer = *(ImRect*)lua_touserdata(pl,2);
	ImRect inner = *(ImRect*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	float rounding = *(float*)lua_touserdata(pl,5);
	return 0;
}

int ImVector_erase(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	const T* it = (const T*)lua_touserdata(pl,2);
	return 1;
}

int ImDrawData_Clear(lua_State *pl)
{
	ImDrawData* self = (ImDrawData*)lua_touserdata(pl,1);
	return 0;
}

int igInputFloat(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float* v = (float*)lua_touserdata(pl,2);
	float step = *(float*)lua_touserdata(pl,3);
	float step_fast = *(float*)lua_touserdata(pl,4);
	const char* format = lua_tostring(pl,5);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,6);
	return 1;
}

int igLogFinish(lua_State *pl)
{
	return 0;
}

int igGetForegroundDrawList(lua_State *pl)
{
	return 1;
}

int ImFontAtlas_ClearFonts(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 0;
}

int ImBitVector_Create(lua_State *pl)
{
	ImBitVector* self = (ImBitVector*)lua_touserdata(pl,1);
	int sz = (int)lua_tonumber(pl,2);
	return 0;
}

int ImSpanAllocator_GetArenaSizeInBytes(lua_State *pl)
{
	ImSpanAllocator* self = (ImSpanAllocator*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiStorage_GetBoolRef(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	bool default_val = lua_toboolean(pl,3);
	return 1;
}

int ImGuiOldColumns_destroy(lua_State *pl)
{
	ImGuiOldColumns* self = (ImGuiOldColumns*)lua_touserdata(pl,1);
	return 0;
}

int igBeginChildEx(lua_State *pl)
{
	const char* name = lua_tostring(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	const ImVec2 size_arg = *(const ImVec2*)lua_touserdata(pl,3);
	bool border = lua_toboolean(pl,4);
	ImGuiWindowFlags flags = *(ImGuiWindowFlags*)lua_touserdata(pl,5);
	return 1;
}

int igScrollToItem(lua_State *pl)
{
	ImGuiScrollFlags flags = *(ImGuiScrollFlags*)lua_touserdata(pl,1);
	return 0;
}

int igShutdown(lua_State *pl)
{
	ImGuiContext* context = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiDockNode_IsRootNode(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int igImStrnicmp(lua_State *pl)
{
	const char* str1 = lua_tostring(pl,1);
	const char* str2 = lua_tostring(pl,2);
	size_t count = *(size_t*)lua_touserdata(pl,3);
	return 1;
}

int ImFontGlyphRangesBuilder_BuildRanges(lua_State *pl)
{
	ImFontGlyphRangesBuilder* self = (ImFontGlyphRangesBuilder*)lua_touserdata(pl,1);
	ImVector_ImWchar* out_ranges = (ImVector_ImWchar*)lua_touserdata(pl,2);
	return 0;
}

int igPopStyleVar(lua_State *pl)
{
	int count = (int)lua_tonumber(pl,1);
	return 0;
}

int igSetWindowFocus(lua_State *pl)
{
	return 0;
}

int ImSpan_set(lua_State *pl)
{
	ImSpan* self = (ImSpan*)lua_touserdata(pl,1);
	T* data = (T*)lua_touserdata(pl,2);
	int size = (int)lua_tonumber(pl,3);
	return 0;
}

int igGetWindowPos(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igBulletTextV(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	va_list args = *(va_list*)lua_touserdata(pl,2);
	return 0;
}

int igGetTextLineHeightWithSpacing(lua_State *pl)
{
	return 1;
}

int igGetCurrentWindow(lua_State *pl)
{
	return 1;
}

int igRenderBullet(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	ImVec2 pos = *(ImVec2*)lua_touserdata(pl,2);
	ImU32 col = *(ImU32*)lua_touserdata(pl,3);
	return 0;
}

int igLabelTextV(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const char* fmt = lua_tostring(pl,2);
	va_list args = *(va_list*)lua_touserdata(pl,3);
	return 0;
}

int igGcCompactTransientWindowBuffers(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 0;
}

int igAlignTextToFramePadding(lua_State *pl)
{
	return 0;
}

int ImRect_GetSize(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImRect* self = (ImRect*)lua_touserdata(pl,2);
	return 0;
}

int ImFontGlyphRangesBuilder_Clear(lua_State *pl)
{
	ImFontGlyphRangesBuilder* self = (ImFontGlyphRangesBuilder*)lua_touserdata(pl,1);
	return 0;
}

int ImFontAtlasCustomRect_IsPacked(lua_State *pl)
{
	ImFontAtlasCustomRect* self = (ImFontAtlasCustomRect*)lua_touserdata(pl,1);
	return 1;
}

int ImColor_destroy(lua_State *pl)
{
	ImColor* self = (ImColor*)lua_touserdata(pl,1);
	return 0;
}

int igCollapseButton(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,2);
	ImGuiDockNode* dock_node = (ImGuiDockNode*)lua_touserdata(pl,3);
	return 1;
}

int igTreePushOverrideID(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 0;
}

int igDebugCheckVersionAndDataLayout(lua_State *pl)
{
	const char* version_str = lua_tostring(pl,1);
	size_t sz_io = *(size_t*)lua_touserdata(pl,2);
	size_t sz_style = *(size_t*)lua_touserdata(pl,3);
	size_t sz_vec2 = *(size_t*)lua_touserdata(pl,4);
	size_t sz_vec4 = *(size_t*)lua_touserdata(pl,5);
	size_t sz_drawvert = *(size_t*)lua_touserdata(pl,6);
	size_t sz_drawidx = *(size_t*)lua_touserdata(pl,7);
	return 1;
}

int ImGuiViewport_destroy(lua_State *pl)
{
	ImGuiViewport* self = (ImGuiViewport*)lua_touserdata(pl,1);
	return 0;
}

int igIsNavInputDown(lua_State *pl)
{
	ImGuiNavInput n = *(ImGuiNavInput*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawList_AddText(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,2);
	ImU32 col = *(ImU32*)lua_touserdata(pl,3);
	const char* text_begin = lua_tostring(pl,4);
	const char* text_end = lua_tostring(pl,5);
	return 0;
}

int ImRect_GetTR(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImRect* self = (ImRect*)lua_touserdata(pl,2);
	return 0;
}

int ImChunkStream_offset_from_ptr(lua_State *pl)
{
	ImChunkStream* self = (ImChunkStream*)lua_touserdata(pl,1);
	const T* p = (const T*)lua_touserdata(pl,2);
	return 1;
}

int igSliderFloat4(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[4] v = *(float[4]*)lua_touserdata(pl,2);
	float v_min = *(float*)lua_touserdata(pl,3);
	float v_max = *(float*)lua_touserdata(pl,4);
	const char* format = lua_tostring(pl,5);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,6);
	return 1;
}

int igSliderFloat3(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[3] v = *(float[3]*)lua_touserdata(pl,2);
	float v_min = *(float*)lua_touserdata(pl,3);
	float v_max = *(float*)lua_touserdata(pl,4);
	const char* format = lua_tostring(pl,5);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,6);
	return 1;
}

int ImGuiTextBuffer_empty(lua_State *pl)
{
	ImGuiTextBuffer* self = (ImGuiTextBuffer*)lua_touserdata(pl,1);
	return 1;
}

int igErrorCheckEndWindowRecover(lua_State *pl)
{
	ImGuiErrorLogCallback log_callback = *(ImGuiErrorLogCallback*)lua_touserdata(pl,1);
	void* user_data = (void*)lua_touserdata(pl,2);
	return 0;
}

int igLogRenderedText(lua_State *pl)
{
	const ImVec2* ref_pos = (const ImVec2*)lua_touserdata(pl,1);
	const char* text = lua_tostring(pl,2);
	const char* text_end = lua_tostring(pl,3);
	return 0;
}

int ImGuiInputTextCallbackData_destroy(lua_State *pl)
{
	ImGuiInputTextCallbackData* self = (ImGuiInputTextCallbackData*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiViewport_ImGuiViewport(lua_State *pl)
{
	return 1;
}

int ImGuiViewportP_destroy(lua_State *pl)
{
	ImGuiViewportP* self = (ImGuiViewportP*)lua_touserdata(pl,1);
	return 0;
}

int igImFloorSigned(lua_State *pl)
{
	float f = *(float*)lua_touserdata(pl,1);
	return 1;
}

int ImPool_ImPool(lua_State *pl)
{
	return 1;
}

int ImDrawList_PathArcToFast(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 center = *(const ImVec2*)lua_touserdata(pl,2);
	float radius = *(float*)lua_touserdata(pl,3);
	int a_min_of_12 = (int)lua_tonumber(pl,4);
	int a_max_of_12 = (int)lua_tonumber(pl,5);
	return 0;
}

int igGetPopupAllowedExtentRect(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,2);
	return 0;
}

int igImCharIsBlankW(lua_State *pl)
{
	unsigned int c = *(unsigned int*)lua_touserdata(pl,1);
	return 1;
}

int igGetNavInputAmount2d(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImGuiNavDirSourceFlags dir_sources = *(ImGuiNavDirSourceFlags*)lua_touserdata(pl,2);
	ImGuiInputReadMode mode = *(ImGuiInputReadMode*)lua_touserdata(pl,3);
	float slow_factor = *(float*)lua_touserdata(pl,4);
	float fast_factor = *(float*)lua_touserdata(pl,5);
	return 0;
}

int igGetMouseClickedCount(lua_State *pl)
{
	ImGuiMouseButton button = *(ImGuiMouseButton*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiComboPreviewData_destroy(lua_State *pl)
{
	ImGuiComboPreviewData* self = (ImGuiComboPreviewData*)lua_touserdata(pl,1);
	return 0;
}

int igGetColumnWidth(lua_State *pl)
{
	int column_index = (int)lua_tonumber(pl,1);
	return 1;
}

int igSetWindowSize(lua_State *pl)
{
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,1);
	ImGuiCond cond = *(ImGuiCond*)lua_touserdata(pl,2);
	return 0;
}

int igTableGetCellBgRect(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	const ImGuiTable* table = (const ImGuiTable*)lua_touserdata(pl,2);
	int column_n = (int)lua_tonumber(pl,3);
	return 0;
}

int igGetMainViewport(lua_State *pl)
{
	return 1;
}

int ImBitVector_Clear(lua_State *pl)
{
	ImBitVector* self = (ImBitVector*)lua_touserdata(pl,1);
	return 0;
}

int igRenderTextEllipsis(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 pos_min = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 pos_max = *(const ImVec2*)lua_touserdata(pl,3);
	float clip_max_x = *(float*)lua_touserdata(pl,4);
	float ellipsis_max_x = *(float*)lua_touserdata(pl,5);
	const char* text = lua_tostring(pl,6);
	const char* text_end = lua_tostring(pl,7);
	const ImVec2* text_size_if_known = (const ImVec2*)lua_touserdata(pl,8);
	return 0;
}

int ImDrawList_PopClipRect(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int igArrowButtonEx(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	ImGuiDir dir = *(ImGuiDir*)lua_touserdata(pl,2);
	ImVec2 size_arg = *(ImVec2*)lua_touserdata(pl,3);
	ImGuiButtonFlags flags = *(ImGuiButtonFlags*)lua_touserdata(pl,4);
	return 1;
}

int igCloseButton(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,2);
	return 1;
}

int igDragFloat2(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[2] v = *(float[2]*)lua_touserdata(pl,2);
	float v_speed = *(float*)lua_touserdata(pl,3);
	float v_min = *(float*)lua_touserdata(pl,4);
	float v_max = *(float*)lua_touserdata(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,7);
	return 1;
}

int igUpdateMouseMovingWindowEndFrame(lua_State *pl)
{
	return 0;
}

int ImDrawList_AddQuad(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 p4 = *(const ImVec2*)lua_touserdata(pl,5);
	ImU32 col = *(ImU32*)lua_touserdata(pl,6);
	float thickness = *(float*)lua_touserdata(pl,7);
	return 0;
}

int igInputFloat4(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[4] v = *(float[4]*)lua_touserdata(pl,2);
	const char* format = lua_tostring(pl,3);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,4);
	return 1;
}

int igScrollToBringRectIntoView(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	const ImRect rect = *(const ImRect*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawList_PrimRect(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 a = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 b = *(const ImVec2*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	return 0;
}

int ImVector_clear(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 0;
}

int igTextWrappedV(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	va_list args = *(va_list*)lua_touserdata(pl,2);
	return 0;
}

int igImStrlenW(lua_State *pl)
{
	const ImWchar* str = (const ImWchar*)lua_touserdata(pl,1);
	return 1;
}

int ImFontAtlas_GetGlyphRangesChineseSimplifiedCommon(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int igGetFrameCount(lua_State *pl)
{
	return 1;
}

int igTabBarFindMostRecentlySelectedTabForActiveWindow(lua_State *pl)
{
	ImGuiTabBar* tab_bar = (ImGuiTabBar*)lua_touserdata(pl,1);
	return 1;
}

int igScrollbar(lua_State *pl)
{
	ImGuiAxis axis = *(ImGuiAxis*)lua_touserdata(pl,1);
	return 0;
}

int igIsClippedEx(lua_State *pl)
{
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	return 1;
}

int igTabBarRemoveTab(lua_State *pl)
{
	ImGuiTabBar* tab_bar = (ImGuiTabBar*)lua_touserdata(pl,1);
	ImGuiID tab_id = *(ImGuiID*)lua_touserdata(pl,2);
	return 0;
}

int igBulletText(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	... ... = *(...*)lua_touserdata(pl,2);
	return 0;
}

int ImVector_end(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 1;
}

int ImFontAtlas_AddFontDefault(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	const ImFontConfig* font_cfg = (const ImFontConfig*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiIO_ImGuiIO(lua_State *pl)
{
	return 1;
}

int ImGuiInputTextCallbackData_DeleteChars(lua_State *pl)
{
	ImGuiInputTextCallbackData* self = (ImGuiInputTextCallbackData*)lua_touserdata(pl,1);
	int pos = (int)lua_tonumber(pl,2);
	int bytes_count = (int)lua_tonumber(pl,3);
	return 0;
}

int igBegin(lua_State *pl)
{
	const char* name = lua_tostring(pl,1);
	bool* p_open = (bool*)lua_touserdata(pl,2);
	ImGuiWindowFlags flags = *(ImGuiWindowFlags*)lua_touserdata(pl,3);
	return 1;
}

int ImDrawListSharedData_destroy(lua_State *pl)
{
	ImDrawListSharedData* self = (ImDrawListSharedData*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiStorage_GetBool(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	bool default_val = lua_toboolean(pl,3);
	return 1;
}

int igTableSetColumnWidthAutoSingle(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	int column_n = (int)lua_tonumber(pl,2);
	return 0;
}

int igImFileGetSize(lua_State *pl)
{
	ImFileHandle file = *(ImFileHandle*)lua_touserdata(pl,1);
	return 1;
}

int ImVector_clear_destruct(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 0;
}

int ImVector_pop_back(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 0;
}

int igOpenPopupEx(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiPopupFlags popup_flags = *(ImGuiPopupFlags*)lua_touserdata(pl,2);
	return 0;
}

int igItemHoverable(lua_State *pl)
{
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	return 1;
}

int igGetWindowDpiScale(lua_State *pl)
{
	return 1;
}

int igGetCursorScreenPos(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igRenderArrowPointingAt(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	ImVec2 pos = *(ImVec2*)lua_touserdata(pl,2);
	ImVec2 half_sz = *(ImVec2*)lua_touserdata(pl,3);
	ImGuiDir direction = *(ImGuiDir*)lua_touserdata(pl,4);
	ImU32 col = *(ImU32*)lua_touserdata(pl,5);
	return 0;
}

int ImDrawList_PathBezierQuadraticCurveTo(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,3);
	int num_segments = (int)lua_tonumber(pl,4);
	return 0;
}

int igDataTypeClamp(lua_State *pl)
{
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,1);
	void* p_data = (void*)lua_touserdata(pl,2);
	const void* p_min = (const void*)lua_touserdata(pl,3);
	const void* p_max = (const void*)lua_touserdata(pl,4);
	return 1;
}

int ImGuiPayload_ImGuiPayload(lua_State *pl)
{
	return 1;
}

int igTextV(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	va_list args = *(va_list*)lua_touserdata(pl,2);
	return 0;
}

int igGetColumnIndex(lua_State *pl)
{
	return 1;
}

int ImPool_Reserve(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	int capacity = (int)lua_tonumber(pl,2);
	return 0;
}

int igCalcRoundingFlagsForRectInRect(lua_State *pl)
{
	const ImRect r_in = *(const ImRect*)lua_touserdata(pl,1);
	const ImRect r_outer = *(const ImRect*)lua_touserdata(pl,2);
	float threshold = *(float*)lua_touserdata(pl,3);
	return 1;
}

int igGetMouseDragDelta(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImGuiMouseButton button = *(ImGuiMouseButton*)lua_touserdata(pl,2);
	float lock_threshold = *(float*)lua_touserdata(pl,3);
	return 0;
}

int ImDrawListSharedData_ImDrawListSharedData(lua_State *pl)
{
	return 1;
}

int ImBitArray_destroy(lua_State *pl)
{
	ImBitArray* self = (ImBitArray*)lua_touserdata(pl,1);
	return 0;
}

int igBeginGroup(lua_State *pl)
{
	return 0;
}

int igBeginTableEx(lua_State *pl)
{
	const char* name = lua_tostring(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	int columns_count = (int)lua_tonumber(pl,3);
	ImGuiTableFlags flags = *(ImGuiTableFlags*)lua_touserdata(pl,4);
	const ImVec2 outer_size = *(const ImVec2*)lua_touserdata(pl,5);
	float inner_width = *(float*)lua_touserdata(pl,6);
	return 1;
}

int igNavInitRequestApplyResult(lua_State *pl)
{
	return 0;
}

int ImFont_AddRemapChar(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	ImWchar dst = *(ImWchar*)lua_touserdata(pl,2);
	ImWchar src = *(ImWchar*)lua_touserdata(pl,3);
	bool overwrite_dst = lua_toboolean(pl,4);
	return 0;
}

int ImGuiMetricsConfig_destroy(lua_State *pl)
{
	ImGuiMetricsConfig* self = (ImGuiMetricsConfig*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiStackSizes_destroy(lua_State *pl)
{
	ImGuiStackSizes* self = (ImGuiStackSizes*)lua_touserdata(pl,1);
	return 0;
}

int igPushStyleColor(lua_State *pl)
{
	ImGuiCol idx = *(ImGuiCol*)lua_touserdata(pl,1);
	ImU32 col = *(ImU32*)lua_touserdata(pl,2);
	return 0;
}

int igImParseFormatTrimDecorations(lua_State *pl)
{
	const char* format = lua_tostring(pl,1);
	char* buf = (char*)lua_touserdata(pl,2);
	size_t buf_size = *(size_t*)lua_touserdata(pl,3);
	return 1;
}

int ImRect_Expand(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	const float amount = *(const float*)lua_touserdata(pl,2);
	return 0;
}

int igDockSpaceOverViewport(lua_State *pl)
{
	const ImGuiViewport* viewport = (const ImGuiViewport*)lua_touserdata(pl,1);
	ImGuiDockNodeFlags flags = *(ImGuiDockNodeFlags*)lua_touserdata(pl,2);
	const ImGuiWindowClass* window_class = (const ImGuiWindowClass*)lua_touserdata(pl,3);
	return 1;
}

int ImGuiTableColumn_destroy(lua_State *pl)
{
	ImGuiTableColumn* self = (ImGuiTableColumn*)lua_touserdata(pl,1);
	return 0;
}

int igDockBuilderCopyDockSpace(lua_State *pl)
{
	ImGuiID src_dockspace_id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiID dst_dockspace_id = *(ImGuiID*)lua_touserdata(pl,2);
	ImVector_const_charPtr* in_window_remap_pairs = (ImVector_const_charPtr*)lua_touserdata(pl,3);
	return 0;
}

int igListBox(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int* current_item = (int*)lua_touserdata(pl,2);
	const char* const[] items = (const char* const[])lua_touserdata(pl,3);
	int items_count = (int)lua_tonumber(pl,4);
	int height_in_items = (int)lua_tonumber(pl,5);
	return 1;
}

int igColorPicker4(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[4] col = *(float[4]*)lua_touserdata(pl,2);
	ImGuiColorEditFlags flags = *(ImGuiColorEditFlags*)lua_touserdata(pl,3);
	const float* ref_col = (const float*)lua_touserdata(pl,4);
	return 1;
}

int igPushAllowKeyboardFocus(lua_State *pl)
{
	bool allow_keyboard_focus = lua_toboolean(pl,1);
	return 0;
}

int ImPool_GetByIndex(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	ImPoolIdx n = *(ImPoolIdx*)lua_touserdata(pl,2);
	return 1;
}

int igTableGetColumnNextSortDirection(lua_State *pl)
{
	ImGuiTableColumn* column = (ImGuiTableColumn*)lua_touserdata(pl,1);
	return 1;
}

int igGetColumnNormFromOffset(lua_State *pl)
{
	const ImGuiOldColumns* columns = (const ImGuiOldColumns*)lua_touserdata(pl,1);
	float offset = *(float*)lua_touserdata(pl,2);
	return 1;
}

int ImDrawList_destroy(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int igInputTextMultiline(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	char* buf = (char*)lua_touserdata(pl,2);
	size_t buf_size = *(size_t*)lua_touserdata(pl,3);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,4);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,5);
	ImGuiInputTextCallback callback = *(ImGuiInputTextCallback*)lua_touserdata(pl,6);
	void* user_data = (void*)lua_touserdata(pl,7);
	return 1;
}

int ImGuiStorage_BuildSortByKey(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiMetricsConfig_ImGuiMetricsConfig(lua_State *pl)
{
	return 1;
}

int ImPool_GetByKey(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	return 1;
}

int ImBitArray_ImBitArray(lua_State *pl)
{
	return 1;
}

int ImGuiListClipper_ImGuiListClipper(lua_State *pl)
{
	return 1;
}

int ImGuiOnceUponAFrame_destroy(lua_State *pl)
{
	ImGuiOnceUponAFrame* self = (ImGuiOnceUponAFrame*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList__OnChangedClipRect(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int igIsWindowFocused(lua_State *pl)
{
	ImGuiFocusedFlags flags = *(ImGuiFocusedFlags*)lua_touserdata(pl,1);
	return 1;
}

int ImChunkStream_alloc_chunk(lua_State *pl)
{
	ImChunkStream* self = (ImChunkStream*)lua_touserdata(pl,1);
	size_t sz = *(size_t*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiPayload_IsDataType(lua_State *pl)
{
	ImGuiPayload* self = (ImGuiPayload*)lua_touserdata(pl,1);
	const char* type = lua_tostring(pl,2);
	return 1;
}

int igInputFloat2(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[2] v = *(float[2]*)lua_touserdata(pl,2);
	const char* format = lua_tostring(pl,3);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,4);
	return 1;
}

int igImLog(lua_State *pl)
{
	float x = *(float*)lua_touserdata(pl,1);
	return 1;
}

int igColorEditOptionsPopup(lua_State *pl)
{
	const float* col = (const float*)lua_touserdata(pl,1);
	ImGuiColorEditFlags flags = *(ImGuiColorEditFlags*)lua_touserdata(pl,2);
	return 0;
}

int igTabBarQueueReorderFromMousePos(lua_State *pl)
{
	ImGuiTabBar* tab_bar = (ImGuiTabBar*)lua_touserdata(pl,1);
	const ImGuiTabItem* tab = (const ImGuiTabItem*)lua_touserdata(pl,2);
	ImVec2 mouse_pos = *(ImVec2*)lua_touserdata(pl,3);
	return 0;
}

int ImDrawDataBuilder_FlattenIntoSingleLayer(lua_State *pl)
{
	ImDrawDataBuilder* self = (ImDrawDataBuilder*)lua_touserdata(pl,1);
	return 0;
}

int igSetNextWindowClass(lua_State *pl)
{
	const ImGuiWindowClass* window_class = (const ImGuiWindowClass*)lua_touserdata(pl,1);
	return 0;
}

int igFindRenderedTextEnd(lua_State *pl)
{
	const char* text = lua_tostring(pl,1);
	const char* text_end = lua_tostring(pl,2);
	return 1;
}

int ImGuiPayload_destroy(lua_State *pl)
{
	ImGuiPayload* self = (ImGuiPayload*)lua_touserdata(pl,1);
	return 0;
}

int igInputFloat3(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[3] v = *(float[3]*)lua_touserdata(pl,2);
	const char* format = lua_tostring(pl,3);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,4);
	return 1;
}

int igNavMoveRequestTryWrapping(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiNavMoveFlags move_flags = *(ImGuiNavMoveFlags*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiInputTextCallbackData_ImGuiInputTextCallbackData(lua_State *pl)
{
	return 1;
}

int ImFontAtlasCustomRect_destroy(lua_State *pl)
{
	ImFontAtlasCustomRect* self = (ImFontAtlasCustomRect*)lua_touserdata(pl,1);
	return 0;
}

int ImVector_erase_unsorted(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	const T* it = (const T*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiViewport_GetWorkCenter(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImGuiViewport* self = (ImGuiViewport*)lua_touserdata(pl,2);
	return 0;
}

int ImBitVector_SetBit(lua_State *pl)
{
	ImBitVector* self = (ImBitVector*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 0;
}

int igIsPopupOpen(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	ImGuiPopupFlags flags = *(ImGuiPopupFlags*)lua_touserdata(pl,2);
	return 1;
}

int igTreeNodeBehavior(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiTreeNodeFlags flags = *(ImGuiTreeNodeFlags*)lua_touserdata(pl,2);
	const char* label = lua_tostring(pl,3);
	const char* label_end = lua_tostring(pl,4);
	return 1;
}

int ImGuiStorage_SetVoidPtr(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	void* val = (void*)lua_touserdata(pl,3);
	return 0;
}

int ImRect_IsInverted(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	return 1;
}

int igGetFocusedFocusScope(lua_State *pl)
{
	return 1;
}

int igPushItemWidth(lua_State *pl)
{
	float item_width = *(float*)lua_touserdata(pl,1);
	return 0;
}

int igImFloor(lua_State *pl)
{
	float f = *(float*)lua_touserdata(pl,1);
	return 1;
}

int igScrollToRect(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	const ImRect rect = *(const ImRect*)lua_touserdata(pl,2);
	ImGuiScrollFlags flags = *(ImGuiScrollFlags*)lua_touserdata(pl,3);
	return 0;
}

int ImChunkStream_ptr_from_offset(lua_State *pl)
{
	ImChunkStream* self = (ImChunkStream*)lua_touserdata(pl,1);
	int off = (int)lua_tonumber(pl,2);
	return 1;
}

int igImFontAtlasBuildFinish(lua_State *pl)
{
	ImFontAtlas* atlas = (ImFontAtlas*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiInputTextState_destroy(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 0;
}

int igSeparatorEx(lua_State *pl)
{
	ImGuiSeparatorFlags flags = *(ImGuiSeparatorFlags*)lua_touserdata(pl,1);
	return 0;
}

int igDockBuilderRemoveNode(lua_State *pl)
{
	ImGuiID node_id = *(ImGuiID*)lua_touserdata(pl,1);
	return 0;
}

int igImTriangleArea(lua_State *pl)
{
	const ImVec2 a = *(const ImVec2*)lua_touserdata(pl,1);
	const ImVec2 b = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 c = *(const ImVec2*)lua_touserdata(pl,3);
	return 1;
}

int igTabItemLabelAndCloseButton(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,2);
	ImGuiTabItemFlags flags = *(ImGuiTabItemFlags*)lua_touserdata(pl,3);
	ImVec2 frame_padding = *(ImVec2*)lua_touserdata(pl,4);
	const char* label = lua_tostring(pl,5);
	ImGuiID tab_id = *(ImGuiID*)lua_touserdata(pl,6);
	ImGuiID close_button_id = *(ImGuiID*)lua_touserdata(pl,7);
	bool is_contents_visible = lua_toboolean(pl,8);
	bool* out_just_closed = (bool*)lua_touserdata(pl,9);
	bool* out_text_clipped = (bool*)lua_touserdata(pl,10);
	return 0;
}

int igGetColorU32(lua_State *pl)
{
	ImGuiCol idx = *(ImGuiCol*)lua_touserdata(pl,1);
	float alpha_mul = *(float*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiInputTextState_SelectAll(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList_GetClipRectMax(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,2);
	return 0;
}

int igGetContentRegionAvail(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiWindowSettings_destroy(lua_State *pl)
{
	ImGuiWindowSettings* self = (ImGuiWindowSettings*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiDockNode_SetLocalFlags(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	ImGuiDockNodeFlags flags = *(ImGuiDockNodeFlags*)lua_touserdata(pl,2);
	return 0;
}

int igLogToBuffer(lua_State *pl)
{
	int auto_open_depth = (int)lua_tonumber(pl,1);
	return 0;
}

int ImGuiStoragePair_destroy(lua_State *pl)
{
	ImGuiStoragePair* self = (ImGuiStoragePair*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList_GetClipRectMin(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,2);
	return 0;
}

int igBeginCombo(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const char* preview_value = lua_tostring(pl,2);
	ImGuiComboFlags flags = *(ImGuiComboFlags*)lua_touserdata(pl,3);
	return 1;
}

int ImChunkStream_empty(lua_State *pl)
{
	ImChunkStream* self = (ImChunkStream*)lua_touserdata(pl,1);
	return 1;
}

int igFocusWindow(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 0;
}

int igCalcItemSize(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImVec2 size = *(ImVec2*)lua_touserdata(pl,2);
	float default_w = *(float*)lua_touserdata(pl,3);
	float default_h = *(float*)lua_touserdata(pl,4);
	return 0;
}

int ImGuiInputTextCallbackData_ClearSelection(lua_State *pl)
{
	ImGuiInputTextCallbackData* self = (ImGuiInputTextCallbackData*)lua_touserdata(pl,1);
	return 0;
}

int igDockBuilderAddNode(lua_State *pl)
{
	ImGuiID node_id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiDockNodeFlags flags = *(ImGuiDockNodeFlags*)lua_touserdata(pl,2);
	return 1;
}

int igSetAllocatorFunctions(lua_State *pl)
{
	ImGuiMemAllocFunc alloc_func = *(ImGuiMemAllocFunc*)lua_touserdata(pl,1);
	ImGuiMemFreeFunc free_func = *(ImGuiMemFreeFunc*)lua_touserdata(pl,2);
	void* user_data = (void*)lua_touserdata(pl,3);
	return 0;
}

int igDockBuilderSplitNode(lua_State *pl)
{
	ImGuiID node_id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiDir split_dir = *(ImGuiDir*)lua_touserdata(pl,2);
	float size_ratio_for_node_at_dir = *(float*)lua_touserdata(pl,3);
	ImGuiID* out_id_at_dir = (ImGuiID*)lua_touserdata(pl,4);
	ImGuiID* out_id_at_opposite_dir = (ImGuiID*)lua_touserdata(pl,5);
	return 1;
}

int igBeginChild(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,2);
	bool border = lua_toboolean(pl,3);
	ImGuiWindowFlags flags = *(ImGuiWindowFlags*)lua_touserdata(pl,4);
	return 1;
}

int ImBitArray_SetBitRange(lua_State *pl)
{
	ImBitArray* self = (ImBitArray*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	int n2 = (int)lua_tonumber(pl,3);
	return 0;
}

int ImGuiTableSettings_destroy(lua_State *pl)
{
	ImGuiTableSettings* self = (ImGuiTableSettings*)lua_touserdata(pl,1);
	return 0;
}

int igRenderTextWrapped(lua_State *pl)
{
	ImVec2 pos = *(ImVec2*)lua_touserdata(pl,1);
	const char* text = lua_tostring(pl,2);
	const char* text_end = lua_tostring(pl,3);
	float wrap_width = *(float*)lua_touserdata(pl,4);
	return 0;
}

int igSetWindowCollapsed(lua_State *pl)
{
	bool collapsed = lua_toboolean(pl,1);
	ImGuiCond cond = *(ImGuiCond*)lua_touserdata(pl,2);
	return 0;
}

int ImVector_resize(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	int new_size = (int)lua_tonumber(pl,2);
	return 0;
}

int igPopColumnsBackground(lua_State *pl)
{
	return 0;
}

int igRender(lua_State *pl)
{
	return 0;
}

int igSetColumnWidth(lua_State *pl)
{
	int column_index = (int)lua_tonumber(pl,1);
	float width = *(float*)lua_touserdata(pl,2);
	return 0;
}

int ImChunkStream_begin(lua_State *pl)
{
	ImChunkStream* self = (ImChunkStream*)lua_touserdata(pl,1);
	return 1;
}

int igInputInt(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int* v = (int*)lua_touserdata(pl,2);
	int step = (int)lua_tonumber(pl,3);
	int step_fast = (int)lua_tonumber(pl,4);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,5);
	return 1;
}

int ImGuiListClipperData_Reset(lua_State *pl)
{
	ImGuiListClipperData* self = (ImGuiListClipperData*)lua_touserdata(pl,1);
	ImGuiListClipper* clipper = (ImGuiListClipper*)lua_touserdata(pl,2);
	return 0;
}

int ImBitArray_SetAllBits(lua_State *pl)
{
	ImBitArray* self = (ImBitArray*)lua_touserdata(pl,1);
	return 0;
}

int ImChunkStream_clear(lua_State *pl)
{
	ImChunkStream* self = (ImChunkStream*)lua_touserdata(pl,1);
	return 0;
}

int igDockContextQueueUndockWindow(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiNextWindowData_destroy(lua_State *pl)
{
	ImGuiNextWindowData* self = (ImGuiNextWindowData*)lua_touserdata(pl,1);
	return 0;
}

int ImBitArray_ClearBit(lua_State *pl)
{
	ImBitArray* self = (ImBitArray*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 0;
}

int igMarkItemEdited(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiTextBuffer_begin(lua_State *pl)
{
	ImGuiTextBuffer* self = (ImGuiTextBuffer*)lua_touserdata(pl,1);
	return 1;
}

int igLoadIniSettingsFromDisk(lua_State *pl)
{
	const char* ini_filename = lua_tostring(pl,1);
	return 0;
}

int ImFontGlyphRangesBuilder_ImFontGlyphRangesBuilder(lua_State *pl)
{
	return 1;
}

int igRenderCheckMark(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	ImVec2 pos = *(ImVec2*)lua_touserdata(pl,2);
	ImU32 col = *(ImU32*)lua_touserdata(pl,3);
	float sz = *(float*)lua_touserdata(pl,4);
	return 0;
}

int igTableBeginApplyRequests(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igBeginPopupModal(lua_State *pl)
{
	const char* name = lua_tostring(pl,1);
	bool* p_open = (bool*)lua_touserdata(pl,2);
	ImGuiWindowFlags flags = *(ImGuiWindowFlags*)lua_touserdata(pl,3);
	return 1;
}

int igEndPopup(lua_State *pl)
{
	return 0;
}

int igLogBegin(lua_State *pl)
{
	ImGuiLogType type = *(ImGuiLogType*)lua_touserdata(pl,1);
	int auto_open_depth = (int)lua_tonumber(pl,2);
	return 0;
}

int igEndTabBar(lua_State *pl)
{
	return 0;
}

int ImRect_GetArea(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiTable_destroy(lua_State *pl)
{
	ImGuiTable* self = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igSliderInt2(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int[2] v = *(int[2]*)lua_touserdata(pl,2);
	int v_min = (int)lua_tonumber(pl,3);
	int v_max = (int)lua_tonumber(pl,4);
	const char* format = lua_tostring(pl,5);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,6);
	return 1;
}

int igIsWindowChildOf(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiWindow* potential_parent = (ImGuiWindow*)lua_touserdata(pl,2);
	bool popup_hierarchy = lua_toboolean(pl,3);
	bool dock_hierarchy = lua_toboolean(pl,4);
	return 1;
}

int ImVector__grow_capacity(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	int sz = (int)lua_tonumber(pl,2);
	return 1;
}

int igGetWindowResizeBorderID(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiDir dir = *(ImGuiDir*)lua_touserdata(pl,2);
	return 1;
}

int igGetContentRegionMax(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int ImFont_CalcWordWrapPositionA(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	float scale = *(float*)lua_touserdata(pl,2);
	const char* text = lua_tostring(pl,3);
	const char* text_end = lua_tostring(pl,4);
	float wrap_width = *(float*)lua_touserdata(pl,5);
	return 1;
}

int igImTriangleClosestPoint(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 a = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 b = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 c = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 p = *(const ImVec2*)lua_touserdata(pl,5);
	return 0;
}

int igTableGetColumnIndex(lua_State *pl)
{
	return 1;
}

int ImGuiStyle_ImGuiStyle(lua_State *pl)
{
	return 1;
}

int igImTextStrFromUtf8(lua_State *pl)
{
	ImWchar* out_buf = (ImWchar*)lua_touserdata(pl,1);
	int out_buf_size = (int)lua_tonumber(pl,2);
	const char* in_text = lua_tostring(pl,3);
	const char* in_text_end = lua_tostring(pl,4);
	const char** in_remaining = (const char**)lua_touserdata(pl,5);
	return 1;
}

int igTableSetColumnWidthAutoAll(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiIO_AddInputCharactersUTF8(lua_State *pl)
{
	ImGuiIO* self = (ImGuiIO*)lua_touserdata(pl,1);
	const char* str = lua_tostring(pl,2);
	return 0;
}

int ImGuiStoragePair_ImGuiStoragePair(lua_State *pl)
{
	ImGuiID _key = *(ImGuiID*)lua_touserdata(pl,1);
	int _val_i = (int)lua_tonumber(pl,2);
	return 1;
}

int ImGuiWindowClass_destroy(lua_State *pl)
{
	ImGuiWindowClass* self = (ImGuiWindowClass*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList_AddNgonFilled(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 center = *(const ImVec2*)lua_touserdata(pl,2);
	float radius = *(float*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	int num_segments = (int)lua_tonumber(pl,5);
	return 0;
}

int ImDrawList_AddTriangle(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,4);
	ImU32 col = *(ImU32*)lua_touserdata(pl,5);
	float thickness = *(float*)lua_touserdata(pl,6);
	return 0;
}

int igClearActiveID(lua_State *pl)
{
	return 0;
}

int igTextUnformatted(lua_State *pl)
{
	const char* text = lua_tostring(pl,1);
	const char* text_end = lua_tostring(pl,2);
	return 0;
}

int igCalcItemWidth(lua_State *pl)
{
	return 1;
}

int igImMin(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 lhs = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 rhs = *(const ImVec2*)lua_touserdata(pl,3);
	return 0;
}

int igDockContextNewFrameUpdateUndocking(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int igIsItemFocused(lua_State *pl)
{
	return 1;
}

int igDockContextCalcDropPosForDocking(lua_State *pl)
{
	ImGuiWindow* target = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiDockNode* target_node = (ImGuiDockNode*)lua_touserdata(pl,2);
	ImGuiWindow* payload = (ImGuiWindow*)lua_touserdata(pl,3);
	ImGuiDir split_dir = *(ImGuiDir*)lua_touserdata(pl,4);
	bool split_outer = lua_toboolean(pl,5);
	ImVec2* out_pos = (ImVec2*)lua_touserdata(pl,6);
	return 1;
}

int ImGuiListClipper_ForceDisplayRangeByIndices(lua_State *pl)
{
	ImGuiListClipper* self = (ImGuiListClipper*)lua_touserdata(pl,1);
	int item_min = (int)lua_tonumber(pl,2);
	int item_max = (int)lua_tonumber(pl,3);
	return 0;
}

int igSetScrollHereY(lua_State *pl)
{
	float center_y_ratio = *(float*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiPtrOrIndex_destroy(lua_State *pl)
{
	ImGuiPtrOrIndex* self = (ImGuiPtrOrIndex*)lua_touserdata(pl,1);
	return 0;
}

int igNavInitWindow(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	bool force_reinit = lua_toboolean(pl,2);
	return 0;
}

int igTableUpdateColumnsWeightFromWidth(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiTextFilter_PassFilter(lua_State *pl)
{
	ImGuiTextFilter* self = (ImGuiTextFilter*)lua_touserdata(pl,1);
	const char* text = lua_tostring(pl,2);
	const char* text_end = lua_tostring(pl,3);
	return 1;
}

int ImRect_Add(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	const ImVec2 p = *(const ImVec2*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiSettingsHandler_destroy(lua_State *pl)
{
	ImGuiSettingsHandler* self = (ImGuiSettingsHandler*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawCmd_destroy(lua_State *pl)
{
	ImDrawCmd* self = (ImDrawCmd*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList__PopUnusedDrawCmd(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int igIsWindowCollapsed(lua_State *pl)
{
	return 1;
}

int ImDrawDataBuilder_ClearFreeMemory(lua_State *pl)
{
	ImDrawDataBuilder* self = (ImDrawDataBuilder*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiLastItemData_ImGuiLastItemData(lua_State *pl)
{
	return 1;
}

int igInputDouble(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	double* v = (double*)lua_touserdata(pl,2);
	double step = *(double*)lua_touserdata(pl,3);
	double step_fast = *(double*)lua_touserdata(pl,4);
	const char* format = lua_tostring(pl,5);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,6);
	return 1;
}

int igIndent(lua_State *pl)
{
	float indent_w = *(float*)lua_touserdata(pl,1);
	return 0;
}

int igColorConvertU32ToFloat4(lua_State *pl)
{
	ImVec4* pOut = (ImVec4*)lua_touserdata(pl,1);
	ImU32 in = *(ImU32*)lua_touserdata(pl,2);
	return 0;
}

int igPushClipRect(lua_State *pl)
{
	const ImVec2 clip_rect_min = *(const ImVec2*)lua_touserdata(pl,1);
	const ImVec2 clip_rect_max = *(const ImVec2*)lua_touserdata(pl,2);
	bool intersect_with_current_clip_rect = lua_toboolean(pl,3);
	return 0;
}

int ImGuiStorage_GetIntRef(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	int default_val = (int)lua_tonumber(pl,3);
	return 1;
}

int ImVector_contains(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	const T v = *(const T*)lua_touserdata(pl,2);
	return 1;
}

int igSetClipboardText(lua_State *pl)
{
	const char* text = lua_tostring(pl,1);
	return 0;
}

int ImGuiStyleMod_ImGuiStyleMod(lua_State *pl)
{
	ImGuiStyleVar idx = *(ImGuiStyleVar*)lua_touserdata(pl,1);
	int v = (int)lua_tonumber(pl,2);
	return 1;
}

int igRenderNavHighlight(lua_State *pl)
{
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	ImGuiNavHighlightFlags flags = *(ImGuiNavHighlightFlags*)lua_touserdata(pl,3);
	return 0;
}

int igAcceptDragDropPayload(lua_State *pl)
{
	const char* type = lua_tostring(pl,1);
	ImGuiDragDropFlags flags = *(ImGuiDragDropFlags*)lua_touserdata(pl,2);
	return 1;
}

int igWindowRectRelToAbs(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,2);
	const ImRect r = *(const ImRect*)lua_touserdata(pl,3);
	return 0;
}

int igInvisibleButton(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,2);
	ImGuiButtonFlags flags = *(ImGuiButtonFlags*)lua_touserdata(pl,3);
	return 1;
}

int igWindowRectAbsToRel(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,2);
	const ImRect r = *(const ImRect*)lua_touserdata(pl,3);
	return 0;
}

int ImFontAtlas_GetMouseCursorTexData(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	ImGuiMouseCursor cursor = *(ImGuiMouseCursor*)lua_touserdata(pl,2);
	ImVec2* out_offset = (ImVec2*)lua_touserdata(pl,3);
	ImVec2* out_size = (ImVec2*)lua_touserdata(pl,4);
	ImVec2[2] out_uv_border = *(ImVec2[2]*)lua_touserdata(pl,5);
	ImVec2[2] out_uv_fill = *(ImVec2[2]*)lua_touserdata(pl,6);
	return 1;
}

int ImPool_Add(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	return 1;
}

int igVSliderScalar(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,2);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,3);
	void* p_data = (void*)lua_touserdata(pl,4);
	const void* p_min = (const void*)lua_touserdata(pl,5);
	const void* p_max = (const void*)lua_touserdata(pl,6);
	const char* format = lua_tostring(pl,7);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,8);
	return 1;
}

int igVSliderInt(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,2);
	int* v = (int*)lua_touserdata(pl,3);
	int v_min = (int)lua_tonumber(pl,4);
	int v_max = (int)lua_tonumber(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,7);
	return 1;
}

int ImGuiInputTextState_ClearSelection(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 0;
}

int igShowStyleEditor(lua_State *pl)
{
	ImGuiStyle* ref = (ImGuiStyle*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiContext_ImGuiContext(lua_State *pl)
{
	ImFontAtlas* shared_font_atlas = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int igColorTooltip(lua_State *pl)
{
	const char* text = lua_tostring(pl,1);
	const float* col = (const float*)lua_touserdata(pl,2);
	ImGuiColorEditFlags flags = *(ImGuiColorEditFlags*)lua_touserdata(pl,3);
	return 0;
}

int igTreeNodeV(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	const char* fmt = lua_tostring(pl,2);
	va_list args = *(va_list*)lua_touserdata(pl,3);
	return 1;
}

int igTreeNodeExV(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	ImGuiTreeNodeFlags flags = *(ImGuiTreeNodeFlags*)lua_touserdata(pl,2);
	const char* fmt = lua_tostring(pl,3);
	va_list args = *(va_list*)lua_touserdata(pl,4);
	return 1;
}

int igTreeNodeEx(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	ImGuiTreeNodeFlags flags = *(ImGuiTreeNodeFlags*)lua_touserdata(pl,2);
	return 1;
}

int ImDrawList_ChannelsSplit(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	int count = (int)lua_tonumber(pl,2);
	return 0;
}

int igTreeNodeBehaviorIsOpen(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiTreeNodeFlags flags = *(ImGuiTreeNodeFlags*)lua_touserdata(pl,2);
	return 1;
}

int igTreeNode(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	return 1;
}

int ImSpanAllocator_destroy(lua_State *pl)
{
	ImSpanAllocator* self = (ImSpanAllocator*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawCmd_ImDrawCmd(lua_State *pl)
{
	return 1;
}

int ImGuiTextFilter_Build(lua_State *pl)
{
	ImGuiTextFilter* self = (ImGuiTextFilter*)lua_touserdata(pl,1);
	return 0;
}

int igSliderInt(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int* v = (int*)lua_touserdata(pl,2);
	int v_min = (int)lua_tonumber(pl,3);
	int v_max = (int)lua_tonumber(pl,4);
	const char* format = lua_tostring(pl,5);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,6);
	return 1;
}

int ImGuiTextBuffer_appendf(lua_State *pl)
{
	ImGuiTextBuffer* self = (ImGuiTextBuffer*)lua_touserdata(pl,1);
	const char* fmt = lua_tostring(pl,2);
	... ... = *(...*)lua_touserdata(pl,3);
	return 0;
}

int igText(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	... ... = *(...*)lua_touserdata(pl,2);
	return 0;
}

int igTempInputText(lua_State *pl)
{
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	const char* label = lua_tostring(pl,3);
	char* buf = (char*)lua_touserdata(pl,4);
	int buf_size = (int)lua_tonumber(pl,5);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,6);
	return 1;
}

int igTempInputScalar(lua_State *pl)
{
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	const char* label = lua_tostring(pl,3);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,4);
	void* p_data = (void*)lua_touserdata(pl,5);
	const char* format = lua_tostring(pl,6);
	const void* p_clamp_min = (const void*)lua_touserdata(pl,7);
	const void* p_clamp_max = (const void*)lua_touserdata(pl,8);
	return 1;
}

int igImIsFloatAboveGuaranteedIntegerPrecision(lua_State *pl)
{
	float f = *(float*)lua_touserdata(pl,1);
	return 1;
}

int igTempInputIsActive(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 1;
}

int igIsActiveIdUsingNavInput(lua_State *pl)
{
	ImGuiNavInput input = *(ImGuiNavInput*)lua_touserdata(pl,1);
	return 1;
}

int igProgressBar(lua_State *pl)
{
	float fraction = *(float*)lua_touserdata(pl,1);
	const ImVec2 size_arg = *(const ImVec2*)lua_touserdata(pl,2);
	const char* overlay = lua_tostring(pl,3);
	return 0;
}

int igIsKeyPressedMap(lua_State *pl)
{
	ImGuiKey key = *(ImGuiKey*)lua_touserdata(pl,1);
	bool repeat = lua_toboolean(pl,2);
	return 1;
}

int igGetTime(lua_State *pl)
{
	return 1;
}

int ImGuiDockNode_destroy(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 0;
}

int igTableUpdateLayout(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igGetClipboardText(lua_State *pl)
{
	return 1;
}

int igGetItemID(lua_State *pl)
{
	return 1;
}

int ImGuiDockContext_ImGuiDockContext(lua_State *pl)
{
	return 1;
}

int igTableSetupColumn(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	ImGuiTableColumnFlags flags = *(ImGuiTableColumnFlags*)lua_touserdata(pl,2);
	float init_width_or_weight = *(float*)lua_touserdata(pl,3);
	ImGuiID user_id = *(ImGuiID*)lua_touserdata(pl,4);
	return 0;
}

int igCalcTextSize(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const char* text = lua_tostring(pl,2);
	const char* text_end = lua_tostring(pl,3);
	bool hide_text_after_double_hash = lua_toboolean(pl,4);
	float wrap_width = *(float*)lua_touserdata(pl,5);
	return 0;
}

int igGetDefaultFont(lua_State *pl)
{
	return 1;
}

int ImGuiTextFilter_Draw(lua_State *pl)
{
	ImGuiTextFilter* self = (ImGuiTextFilter*)lua_touserdata(pl,1);
	const char* label = lua_tostring(pl,2);
	float width = *(float*)lua_touserdata(pl,3);
	return 1;
}

int ImDrawList_PrimRectUV(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 a = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 b = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 uv_a = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 uv_b = *(const ImVec2*)lua_touserdata(pl,5);
	ImU32 col = *(ImU32*)lua_touserdata(pl,6);
	return 0;
}

int igShadeVertsLinearColorGradientKeepAlpha(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	int vert_start_idx = (int)lua_tonumber(pl,2);
	int vert_end_idx = (int)lua_tonumber(pl,3);
	ImVec2 gradient_p0 = *(ImVec2*)lua_touserdata(pl,4);
	ImVec2 gradient_p1 = *(ImVec2*)lua_touserdata(pl,5);
	ImU32 col0 = *(ImU32*)lua_touserdata(pl,6);
	ImU32 col1 = *(ImU32*)lua_touserdata(pl,7);
	return 0;
}

int igDockNodeGetDepth(lua_State *pl)
{
	const ImGuiDockNode* node = (const ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int igGcAwakeTransientWindowBuffers(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 0;
}

int igIsMouseDown(lua_State *pl)
{
	ImGuiMouseButton button = *(ImGuiMouseButton*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiTableColumnSortSpecs_ImGuiTableColumnSortSpecs(lua_State *pl)
{
	return 1;
}

int igDockContextShutdown(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int igTableSetColumnSortDirection(lua_State *pl)
{
	int column_n = (int)lua_tonumber(pl,1);
	ImGuiSortDirection sort_direction = *(ImGuiSortDirection*)lua_touserdata(pl,2);
	bool append_to_sort_specs = lua_toboolean(pl,3);
	return 0;
}

int igTableSetColumnIndex(lua_State *pl)
{
	int column_n = (int)lua_tonumber(pl,1);
	return 1;
}

int igTableSetColumnEnabled(lua_State *pl)
{
	int column_n = (int)lua_tonumber(pl,1);
	bool v = lua_toboolean(pl,2);
	return 0;
}

int igImage(lua_State *pl)
{
	ImTextureID user_texture_id = *(ImTextureID*)lua_touserdata(pl,1);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 uv0 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 uv1 = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec4 tint_col = *(const ImVec4*)lua_touserdata(pl,5);
	const ImVec4 border_col = *(const ImVec4*)lua_touserdata(pl,6);
	return 0;
}

int igTableSaveSettings(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igTablePushBackgroundChannel(lua_State *pl)
{
	return 0;
}

int igCreateNewWindowSettings(lua_State *pl)
{
	const char* name = lua_tostring(pl,1);
	return 1;
}

int igTablePopBackgroundChannel(lua_State *pl)
{
	return 0;
}

int igTableOpenContextMenu(lua_State *pl)
{
	int column_n = (int)lua_tonumber(pl,1);
	return 0;
}

int igImFontAtlasBuildInit(lua_State *pl)
{
	ImFontAtlas* atlas = (ImFontAtlas*)lua_touserdata(pl,1);
	return 0;
}

int igTableNextColumn(lua_State *pl)
{
	return 1;
}

int igTableMergeDrawChannels(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igTableLoadSettings(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int ImRect_ImRect(lua_State *pl)
{
	return 1;
}

int igTableHeadersRow(lua_State *pl)
{
	return 0;
}

int igTableGetSortSpecs(lua_State *pl)
{
	return 1;
}

int igTableGetMaxColumnWidth(lua_State *pl)
{
	const ImGuiTable* table = (const ImGuiTable*)lua_touserdata(pl,1);
	int column_n = (int)lua_tonumber(pl,2);
	return 1;
}

int igTableGetHoveredColumn(lua_State *pl)
{
	return 1;
}

int igSetActiveIdUsingNavAndKeys(lua_State *pl)
{
	return 0;
}

int igTableGetHeaderRowHeight(lua_State *pl)
{
	return 1;
}

int ImChunkStream_next_chunk(lua_State *pl)
{
	ImChunkStream* self = (ImChunkStream*)lua_touserdata(pl,1);
	T* p = (T*)lua_touserdata(pl,2);
	return 1;
}

int ImDrawList_PrimWriteVtx(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 uv = *(const ImVec2*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	return 0;
}

int ImPool_GetOrAddByKey(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	return 1;
}

int igDummy(lua_State *pl)
{
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int ImFont_RenderText(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,2);
	float size = *(float*)lua_touserdata(pl,3);
	ImVec2 pos = *(ImVec2*)lua_touserdata(pl,4);
	ImU32 col = *(ImU32*)lua_touserdata(pl,5);
	const ImVec4 clip_rect = *(const ImVec4*)lua_touserdata(pl,6);
	const char* text_begin = lua_tostring(pl,7);
	const char* text_end = lua_tostring(pl,8);
	float wrap_width = *(float*)lua_touserdata(pl,9);
	bool cpu_fine_clip = lua_toboolean(pl,10);
	return 0;
}

int igDestroyContext(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int igTableSetupScrollFreeze(lua_State *pl)
{
	int cols = (int)lua_tonumber(pl,1);
	int rows = (int)lua_tonumber(pl,2);
	return 0;
}

int igDockBuilderSetNodeSize(lua_State *pl)
{
	ImGuiID node_id = *(ImGuiID*)lua_touserdata(pl,1);
	ImVec2 size = *(ImVec2*)lua_touserdata(pl,2);
	return 0;
}

int igTextDisabledV(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	va_list args = *(va_list*)lua_touserdata(pl,2);
	return 0;
}

int igGetNavInputAmount(lua_State *pl)
{
	ImGuiNavInput n = *(ImGuiNavInput*)lua_touserdata(pl,1);
	ImGuiInputReadMode mode = *(ImGuiInputReadMode*)lua_touserdata(pl,2);
	return 1;
}

int igTableGcCompactTransientBuffers(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igTableFixColumnSortDirection(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	ImGuiTableColumn* column = (ImGuiTableColumn*)lua_touserdata(pl,2);
	return 0;
}

int igImStrSkipBlank(lua_State *pl)
{
	const char* str = lua_tostring(pl,1);
	return 1;
}

int igTableGetBoundSettings(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 1;
}

int igEndChild(lua_State *pl)
{
	return 0;
}

int ImGuiTextRange_destroy(lua_State *pl)
{
	ImGuiTextRange* self = (ImGuiTextRange*)lua_touserdata(pl,1);
	return 0;
}

int igTableDrawBorders(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igTableBeginCell(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	int column_n = (int)lua_tonumber(pl,2);
	return 0;
}

int igTabItemEx(lua_State *pl)
{
	ImGuiTabBar* tab_bar = (ImGuiTabBar*)lua_touserdata(pl,1);
	const char* label = lua_tostring(pl,2);
	bool* p_open = (bool*)lua_touserdata(pl,3);
	ImGuiTabItemFlags flags = *(ImGuiTabItemFlags*)lua_touserdata(pl,4);
	ImGuiWindow* docked_window = (ImGuiWindow*)lua_touserdata(pl,5);
	return 1;
}

int igIsMouseClicked(lua_State *pl)
{
	ImGuiMouseButton button = *(ImGuiMouseButton*)lua_touserdata(pl,1);
	bool repeat = lua_toboolean(pl,2);
	return 1;
}

int igCreateContext(lua_State *pl)
{
	ImFontAtlas* shared_font_atlas = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int igTabItemCalcSize(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const char* label = lua_tostring(pl,2);
	bool has_close_button = lua_toboolean(pl,3);
	return 0;
}

int igTabItemBackground(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,2);
	ImGuiTabItemFlags flags = *(ImGuiTabItemFlags*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	return 0;
}

int igTabBarProcessReorder(lua_State *pl)
{
	ImGuiTabBar* tab_bar = (ImGuiTabBar*)lua_touserdata(pl,1);
	return 1;
}

int igTabBarFindTabByID(lua_State *pl)
{
	ImGuiTabBar* tab_bar = (ImGuiTabBar*)lua_touserdata(pl,1);
	ImGuiID tab_id = *(ImGuiID*)lua_touserdata(pl,2);
	return 1;
}

int igIsMouseDoubleClicked(lua_State *pl)
{
	ImGuiMouseButton button = *(ImGuiMouseButton*)lua_touserdata(pl,1);
	return 1;
}

int igSetNextWindowSize(lua_State *pl)
{
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,1);
	ImGuiCond cond = *(ImGuiCond*)lua_touserdata(pl,2);
	return 0;
}

int igStyleColorsLight(lua_State *pl)
{
	ImGuiStyle* dst = (ImGuiStyle*)lua_touserdata(pl,1);
	return 0;
}

int igSetNextItemOpen(lua_State *pl)
{
	bool is_open = lua_toboolean(pl,1);
	ImGuiCond cond = *(ImGuiCond*)lua_touserdata(pl,2);
	return 0;
}

int igShadeVertsLinearUV(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	int vert_start_idx = (int)lua_tonumber(pl,2);
	int vert_end_idx = (int)lua_tonumber(pl,3);
	const ImVec2 a = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 b = *(const ImVec2*)lua_touserdata(pl,5);
	const ImVec2 uv_a = *(const ImVec2*)lua_touserdata(pl,6);
	const ImVec2 uv_b = *(const ImVec2*)lua_touserdata(pl,7);
	bool clamp = lua_toboolean(pl,8);
	return 0;
}

int igPlotLines(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const float* values = (const float*)lua_touserdata(pl,2);
	int values_count = (int)lua_tonumber(pl,3);
	int values_offset = (int)lua_tonumber(pl,4);
	const char* overlay_text = lua_tostring(pl,5);
	float scale_min = *(float*)lua_touserdata(pl,6);
	float scale_max = *(float*)lua_touserdata(pl,7);
	ImVec2 graph_size = *(ImVec2*)lua_touserdata(pl,8);
	int stride = (int)lua_tonumber(pl,9);
	return 0;
}

int igRenderColorRectWithAlphaCheckerboard(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	ImVec2 p_min = *(ImVec2*)lua_touserdata(pl,2);
	ImVec2 p_max = *(ImVec2*)lua_touserdata(pl,3);
	ImU32 fill_col = *(ImU32*)lua_touserdata(pl,4);
	float grid_step = *(float*)lua_touserdata(pl,5);
	ImVec2 grid_off = *(ImVec2*)lua_touserdata(pl,6);
	float rounding = *(float*)lua_touserdata(pl,7);
	ImDrawFlags flags = *(ImDrawFlags*)lua_touserdata(pl,8);
	return 0;
}

int igSliderInt4(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int[4] v = *(int[4]*)lua_touserdata(pl,2);
	int v_min = (int)lua_tonumber(pl,3);
	int v_max = (int)lua_tonumber(pl,4);
	const char* format = lua_tostring(pl,5);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,6);
	return 1;
}

int ImFontGlyphRangesBuilder_AddText(lua_State *pl)
{
	ImFontGlyphRangesBuilder* self = (ImFontGlyphRangesBuilder*)lua_touserdata(pl,1);
	const char* text = lua_tostring(pl,2);
	const char* text_end = lua_tostring(pl,3);
	return 0;
}

int igTableEndCell(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igSliderFloat2(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[2] v = *(float[2]*)lua_touserdata(pl,2);
	float v_min = *(float*)lua_touserdata(pl,3);
	float v_max = *(float*)lua_touserdata(pl,4);
	const char* format = lua_tostring(pl,5);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,6);
	return 1;
}

int igImQsort(lua_State *pl)
{
	void* base = (void*)lua_touserdata(pl,1);
	size_t count = *(size_t*)lua_touserdata(pl,2);
	size_t size_of_element = *(size_t*)lua_touserdata(pl,3);
	int(*)(void const*,void const*) compare_func = (int(*)(void const*,void const*))lua_touserdata(pl,4);
	return 0;
}

int ImSpan_destroy(lua_State *pl)
{
	ImSpan* self = (ImSpan*)lua_touserdata(pl,1);
	return 0;
}

int igSetKeyboardFocusHere(lua_State *pl)
{
	int offset = (int)lua_tonumber(pl,1);
	return 0;
}

int ImBitArray_TestBit(lua_State *pl)
{
	ImBitArray* self = (ImBitArray*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 1;
}

int igEndMainMenuBar(lua_State *pl)
{
	return 0;
}

int ImPool_TryGetMapData(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	ImPoolIdx n = *(ImPoolIdx*)lua_touserdata(pl,2);
	return 1;
}

int igSliderAngle(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float* v_rad = (float*)lua_touserdata(pl,2);
	float v_degrees_min = *(float*)lua_touserdata(pl,3);
	float v_degrees_max = *(float*)lua_touserdata(pl,4);
	const char* format = lua_tostring(pl,5);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,6);
	return 1;
}

int igUpdateWindowParentAndRootLinks(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiWindowFlags flags = *(ImGuiWindowFlags*)lua_touserdata(pl,2);
	ImGuiWindow* parent_window = (ImGuiWindow*)lua_touserdata(pl,3);
	return 0;
}

int igShowMetricsWindow(lua_State *pl)
{
	bool* p_open = (bool*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList_PushTextureID(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	ImTextureID texture_id = *(ImTextureID*)lua_touserdata(pl,2);
	return 0;
}

int igEndTooltip(lua_State *pl)
{
	return 0;
}

int igShowFontSelector(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	return 0;
}

int ImGuiTextBuffer_append(lua_State *pl)
{
	ImGuiTextBuffer* self = (ImGuiTextBuffer*)lua_touserdata(pl,1);
	const char* str = lua_tostring(pl,2);
	const char* str_end = lua_tostring(pl,3);
	return 0;
}

int igShowFontAtlas(lua_State *pl)
{
	ImFontAtlas* atlas = (ImFontAtlas*)lua_touserdata(pl,1);
	return 0;
}

int igShowAboutWindow(lua_State *pl)
{
	bool* p_open = (bool*)lua_touserdata(pl,1);
	return 0;
}

int igGetVersion(lua_State *pl)
{
	return 1;
}

int igSmallButton(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	return 1;
}

int ImVector_size_in_bytes(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 1;
}

int igSetWindowFontScale(lua_State *pl)
{
	float scale = *(float*)lua_touserdata(pl,1);
	return 0;
}

int ImChunkStream_size(lua_State *pl)
{
	ImChunkStream* self = (ImChunkStream*)lua_touserdata(pl,1);
	return 1;
}

int igDataTypeCompare(lua_State *pl)
{
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,1);
	const void* arg_1 = (const void*)lua_touserdata(pl,2);
	const void* arg_2 = (const void*)lua_touserdata(pl,3);
	return 1;
}

int igSetWindowClipRectBeforeSetChannel(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	const ImRect clip_rect = *(const ImRect*)lua_touserdata(pl,2);
	return 0;
}

int igSetTooltip(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	... ... = *(...*)lua_touserdata(pl,2);
	return 0;
}

int ImVector_front(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 1;
}

int igSetStateStorage(lua_State *pl)
{
	ImGuiStorage* storage = (ImGuiStorage*)lua_touserdata(pl,1);
	return 0;
}

int igRenderArrow(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	ImVec2 pos = *(ImVec2*)lua_touserdata(pl,2);
	ImU32 col = *(ImU32*)lua_touserdata(pl,3);
	ImGuiDir dir = *(ImGuiDir*)lua_touserdata(pl,4);
	float scale = *(float*)lua_touserdata(pl,5);
	return 0;
}

int ImGuiStorage_GetFloat(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	float default_val = *(float*)lua_touserdata(pl,3);
	return 1;
}

int igSetScrollY(lua_State *pl)
{
	float scroll_y = *(float*)lua_touserdata(pl,1);
	return 0;
}

int igSetScrollHereX(lua_State *pl)
{
	float center_x_ratio = *(float*)lua_touserdata(pl,1);
	return 0;
}

int igSetScrollFromPosY(lua_State *pl)
{
	float local_y = *(float*)lua_touserdata(pl,1);
	float center_y_ratio = *(float*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiInputTextState_OnKeyPressed(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	int key = (int)lua_tonumber(pl,2);
	return 0;
}

int igSetNextWindowViewport(lua_State *pl)
{
	ImGuiID viewport_id = *(ImGuiID*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiInputTextState_GetRedoAvailCount(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 1;
}

int igTabBarAddTab(lua_State *pl)
{
	ImGuiTabBar* tab_bar = (ImGuiTabBar*)lua_touserdata(pl,1);
	ImGuiTabItemFlags tab_flags = *(ImGuiTabItemFlags*)lua_touserdata(pl,2);
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,3);
	return 0;
}

int igSetNextWindowScroll(lua_State *pl)
{
	const ImVec2 scroll = *(const ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igDebugNodeWindowsList(lua_State *pl)
{
	ImVector_ImGuiWindowPtr* windows = (ImVector_ImGuiWindowPtr*)lua_touserdata(pl,1);
	const char* label = lua_tostring(pl,2);
	return 0;
}

int igSetNextWindowPos(lua_State *pl)
{
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,1);
	ImGuiCond cond = *(ImGuiCond*)lua_touserdata(pl,2);
	const ImVec2 pivot = *(const ImVec2*)lua_touserdata(pl,3);
	return 0;
}

int igSliderFloat(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float* v = (float*)lua_touserdata(pl,2);
	float v_min = *(float*)lua_touserdata(pl,3);
	float v_max = *(float*)lua_touserdata(pl,4);
	const char* format = lua_tostring(pl,5);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,6);
	return 1;
}

int igSetNextWindowDockID(lua_State *pl)
{
	ImGuiID dock_id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiCond cond = *(ImGuiCond*)lua_touserdata(pl,2);
	return 0;
}

int igSetNextWindowCollapsed(lua_State *pl)
{
	bool collapsed = lua_toboolean(pl,1);
	ImGuiCond cond = *(ImGuiCond*)lua_touserdata(pl,2);
	return 0;
}

int igSplitterBehavior(lua_State *pl)
{
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	ImGuiAxis axis = *(ImGuiAxis*)lua_touserdata(pl,3);
	float* size1 = (float*)lua_touserdata(pl,4);
	float* size2 = (float*)lua_touserdata(pl,5);
	float min_size1 = *(float*)lua_touserdata(pl,6);
	float min_size2 = *(float*)lua_touserdata(pl,7);
	float hover_extend = *(float*)lua_touserdata(pl,8);
	float hover_visibility_delay = *(float*)lua_touserdata(pl,9);
	ImU32 bg_col = *(ImU32*)lua_touserdata(pl,10);
	return 1;
}

int ImGuiViewportP_CalcWorkRectPos(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImGuiViewportP* self = (ImGuiViewportP*)lua_touserdata(pl,2);
	const ImVec2 off_min = *(const ImVec2*)lua_touserdata(pl,3);
	return 0;
}

int igImFileOpen(lua_State *pl)
{
	const char* filename = lua_tostring(pl,1);
	const char* mode = lua_tostring(pl,2);
	return 1;
}

int igSetMouseCursor(lua_State *pl)
{
	ImGuiMouseCursor cursor_type = *(ImGuiMouseCursor*)lua_touserdata(pl,1);
	return 0;
}

int igSetLastItemData(lua_State *pl)
{
	ImGuiID item_id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiItemFlags in_flags = *(ImGuiItemFlags*)lua_touserdata(pl,2);
	ImGuiItemStatusFlags status_flags = *(ImGuiItemStatusFlags*)lua_touserdata(pl,3);
	const ImRect item_rect = *(const ImRect*)lua_touserdata(pl,4);
	return 0;
}

int igImFontAtlasBuildMultiplyCalcLookupTable(lua_State *pl)
{
	unsigned char[256] out_table = *(unsigned char[256]*)lua_touserdata(pl,1);
	float in_multiply_factor = *(float*)lua_touserdata(pl,2);
	return 0;
}

int igSetItemUsingMouseWheel(lua_State *pl)
{
	return 0;
}

int igSetItemAllowOverlap(lua_State *pl)
{
	return 0;
}

int igResetMouseDragDelta(lua_State *pl)
{
	ImGuiMouseButton button = *(ImGuiMouseButton*)lua_touserdata(pl,1);
	return 0;
}

int igSetDragDropPayload(lua_State *pl)
{
	const char* type = lua_tostring(pl,1);
	const void* data = (const void*)lua_touserdata(pl,2);
	size_t sz = *(size_t*)lua_touserdata(pl,3);
	ImGuiCond cond = *(ImGuiCond*)lua_touserdata(pl,4);
	return 1;
}

int igSetCurrentContext(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int igSetCursorScreenPos(lua_State *pl)
{
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igSetCursorPosX(lua_State *pl)
{
	float local_x = *(float*)lua_touserdata(pl,1);
	return 0;
}

int igSetCursorPos(lua_State *pl)
{
	const ImVec2 local_pos = *(const ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igSetCurrentViewport(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiViewportP* viewport = (ImGuiViewportP*)lua_touserdata(pl,2);
	return 0;
}

int igSetCurrentFont(lua_State *pl)
{
	ImFont* font = (ImFont*)lua_touserdata(pl,1);
	return 0;
}

int igNavMoveRequestForward(lua_State *pl)
{
	ImGuiDir move_dir = *(ImGuiDir*)lua_touserdata(pl,1);
	ImGuiDir clip_dir = *(ImGuiDir*)lua_touserdata(pl,2);
	ImGuiNavMoveFlags move_flags = *(ImGuiNavMoveFlags*)lua_touserdata(pl,3);
	ImGuiScrollFlags scroll_flags = *(ImGuiScrollFlags*)lua_touserdata(pl,4);
	return 0;
}

int igSetColumnOffset(lua_State *pl)
{
	int column_index = (int)lua_tonumber(pl,1);
	float offset_x = *(float*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawList__ResetForNewFrame(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int igSeparator(lua_State *pl)
{
	return 0;
}

int ImGuiInputTextState_GetSelectionEnd(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawList_AddImage(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	ImTextureID user_texture_id = *(ImTextureID*)lua_touserdata(pl,2);
	const ImVec2 p_min = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p_max = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 uv_min = *(const ImVec2*)lua_touserdata(pl,5);
	const ImVec2 uv_max = *(const ImVec2*)lua_touserdata(pl,6);
	ImU32 col = *(ImU32*)lua_touserdata(pl,7);
	return 0;
}

int igPushID(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	return 0;
}

int ImFontAtlas_GetGlyphRangesThai(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiStackLevelInfo_destroy(lua_State *pl)
{
	ImGuiStackLevelInfo* self = (ImGuiStackLevelInfo*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiViewportP_CalcWorkRectSize(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImGuiViewportP* self = (ImGuiViewportP*)lua_touserdata(pl,2);
	const ImVec2 off_min = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 off_max = *(const ImVec2*)lua_touserdata(pl,4);
	return 0;
}

int ImDrawList__PathArcToN(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 center = *(const ImVec2*)lua_touserdata(pl,2);
	float radius = *(float*)lua_touserdata(pl,3);
	float a_min = *(float*)lua_touserdata(pl,4);
	float a_max = *(float*)lua_touserdata(pl,5);
	int num_segments = (int)lua_tonumber(pl,6);
	return 0;
}

int ImGuiIO_ClearInputKeys(lua_State *pl)
{
	ImGuiIO* self = (ImGuiIO*)lua_touserdata(pl,1);
	return 0;
}

int ImVector_begin(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 1;
}

int igDockNodeGetWindowMenuButtonId(lua_State *pl)
{
	const ImGuiDockNode* node = (const ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int igVSliderFloat(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,2);
	float* v = (float*)lua_touserdata(pl,3);
	float v_min = *(float*)lua_touserdata(pl,4);
	float v_max = *(float*)lua_touserdata(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,7);
	return 1;
}

int igLogText(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	... ... = *(...*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiTextBuffer_destroy(lua_State *pl)
{
	ImGuiTextBuffer* self = (ImGuiTextBuffer*)lua_touserdata(pl,1);
	return 0;
}

int igDockBuilderFinish(lua_State *pl)
{
	ImGuiID node_id = *(ImGuiID*)lua_touserdata(pl,1);
	return 0;
}

int igCalcWindowNextAutoFitSize(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,2);
	return 0;
}

int ImSpan_index_from_ptr(lua_State *pl)
{
	ImSpan* self = (ImSpan*)lua_touserdata(pl,1);
	const T* it = (const T*)lua_touserdata(pl,2);
	return 1;
}

int ImSpanAllocator_GetSpanPtrEnd(lua_State *pl)
{
	ImSpanAllocator* self = (ImSpanAllocator*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 1;
}

int igTableSettingsFindByID(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 1;
}

int igLogToTTY(lua_State *pl)
{
	int auto_open_depth = (int)lua_tonumber(pl,1);
	return 0;
}

int igOpenPopupOnItemClick(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	ImGuiPopupFlags popup_flags = *(ImGuiPopupFlags*)lua_touserdata(pl,2);
	return 0;
}

int igGetCursorPosY(lua_State *pl)
{
	return 1;
}

int igGetCursorPos(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiPlatformMonitor_ImGuiPlatformMonitor(lua_State *pl)
{
	return 1;
}

int ImFontGlyphRangesBuilder_destroy(lua_State *pl)
{
	ImFontGlyphRangesBuilder* self = (ImFontGlyphRangesBuilder*)lua_touserdata(pl,1);
	return 0;
}

int igBeginMainMenuBar(lua_State *pl)
{
	return 1;
}

int igGetCurrentTable(lua_State *pl)
{
	return 1;
}

int ImGuiViewportP_GetBuildWorkRect(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	ImGuiViewportP* self = (ImGuiViewportP*)lua_touserdata(pl,2);
	return 0;
}

int igNavMoveRequestApplyResult(lua_State *pl)
{
	return 0;
}

int ImFont_ClearOutputData(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	return 0;
}

int ImFont_BuildLookupTable(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiTableSortSpecs_destroy(lua_State *pl)
{
	ImGuiTableSortSpecs* self = (ImGuiTableSortSpecs*)lua_touserdata(pl,1);
	return 0;
}

int igImStrTrimBlanks(lua_State *pl)
{
	char* str = (char*)lua_touserdata(pl,1);
	return 0;
}

int ImColor_SetHSV(lua_State *pl)
{
	ImColor* self = (ImColor*)lua_touserdata(pl,1);
	float h = *(float*)lua_touserdata(pl,2);
	float s = *(float*)lua_touserdata(pl,3);
	float v = *(float*)lua_touserdata(pl,4);
	float a = *(float*)lua_touserdata(pl,5);
	return 0;
}

int ImGuiWindow_GetID(lua_State *pl)
{
	ImGuiWindow* self = (ImGuiWindow*)lua_touserdata(pl,1);
	const char* str = lua_tostring(pl,2);
	const char* str_end = lua_tostring(pl,3);
	return 1;
}

int igIsItemActive(lua_State *pl)
{
	return 1;
}

int igFindSettingsHandler(lua_State *pl)
{
	const char* type_name = lua_tostring(pl,1);
	return 1;
}

int ImDrawList_PrimWriteIdx(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	ImDrawIdx idx = *(ImDrawIdx*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawList_AddLine(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	float thickness = *(float*)lua_touserdata(pl,5);
	return 0;
}

int igImDot(lua_State *pl)
{
	const ImVec2 a = *(const ImVec2*)lua_touserdata(pl,1);
	const ImVec2 b = *(const ImVec2*)lua_touserdata(pl,2);
	return 1;
}

int ImDrawList__TryMergeDrawCmds(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int igNextColumn(lua_State *pl)
{
	return 0;
}

int ImDrawList_PathRect(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 rect_min = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 rect_max = *(const ImVec2*)lua_touserdata(pl,3);
	float rounding = *(float*)lua_touserdata(pl,4);
	ImDrawFlags flags = *(ImDrawFlags*)lua_touserdata(pl,5);
	return 0;
}

int igIsItemClicked(lua_State *pl)
{
	ImGuiMouseButton mouse_button = *(ImGuiMouseButton*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiStorage_GetFloatRef(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	float default_val = *(float*)lua_touserdata(pl,3);
	return 1;
}

int igBeginDockableDragDropTarget(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiViewportP_ClearRequestFlags(lua_State *pl)
{
	ImGuiViewportP* self = (ImGuiViewportP*)lua_touserdata(pl,1);
	return 0;
}

int igErrorCheckEndFrameRecover(lua_State *pl)
{
	ImGuiErrorLogCallback log_callback = *(ImGuiErrorLogCallback*)lua_touserdata(pl,1);
	void* user_data = (void*)lua_touserdata(pl,2);
	return 0;
}

int ImFont_IsLoaded(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawList_AddCircleFilled(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 center = *(const ImVec2*)lua_touserdata(pl,2);
	float radius = *(float*)lua_touserdata(pl,3);
	ImU32 col = *(ImU32*)lua_touserdata(pl,4);
	int num_segments = (int)lua_tonumber(pl,5);
	return 0;
}

int igSetWindowHitTestHole(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,3);
	return 0;
}

int igArrowButton(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	ImGuiDir dir = *(ImGuiDir*)lua_touserdata(pl,2);
	return 1;
}

int ImRect_Contains(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	const ImVec2 p = *(const ImVec2*)lua_touserdata(pl,2);
	return 1;
}

int ImDrawList_PathLineTo(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,2);
	return 0;
}

int igIsWindowWithinBeginStackOf(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiWindow* potential_parent = (ImGuiWindow*)lua_touserdata(pl,2);
	return 1;
}

int igNewFrame(lua_State *pl)
{
	return 0;
}

int ImGuiInputTextState_ImGuiInputTextState(lua_State *pl)
{
	return 1;
}

int igImLerp(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 a = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 b = *(const ImVec2*)lua_touserdata(pl,3);
	float t = *(float*)lua_touserdata(pl,4);
	return 0;
}

int ImGuiListClipperData_destroy(lua_State *pl)
{
	ImGuiListClipperData* self = (ImGuiListClipperData*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiStorage_GetInt(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	int default_val = (int)lua_tonumber(pl,3);
	return 1;
}

int ImFont_CalcTextSizeA(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImFont* self = (ImFont*)lua_touserdata(pl,2);
	float size = *(float*)lua_touserdata(pl,3);
	float max_width = *(float*)lua_touserdata(pl,4);
	float wrap_width = *(float*)lua_touserdata(pl,5);
	const char* text_begin = lua_tostring(pl,6);
	const char* text_end = lua_tostring(pl,7);
	const char** remaining = (const char**)lua_touserdata(pl,8);
	return 0;
}

int ImRect_GetTL(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImRect* self = (ImRect*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawListSplitter_ImDrawListSplitter(lua_State *pl)
{
	return 1;
}

int ImSpan_size(lua_State *pl)
{
	ImSpan* self = (ImSpan*)lua_touserdata(pl,1);
	return 1;
}

int igGetItemRectMin(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiViewportP_GetWorkRect(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	ImGuiViewportP* self = (ImGuiViewportP*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiOldColumns_ImGuiOldColumns(lua_State *pl)
{
	return 1;
}

int igGetCurrentWindowRead(lua_State *pl)
{
	return 1;
}

int igRenderTextClipped(lua_State *pl)
{
	const ImVec2 pos_min = *(const ImVec2*)lua_touserdata(pl,1);
	const ImVec2 pos_max = *(const ImVec2*)lua_touserdata(pl,2);
	const char* text = lua_tostring(pl,3);
	const char* text_end = lua_tostring(pl,4);
	const ImVec2* text_size_if_known = (const ImVec2*)lua_touserdata(pl,5);
	const ImVec2 align = *(const ImVec2*)lua_touserdata(pl,6);
	const ImRect* clip_rect = (const ImRect*)lua_touserdata(pl,7);
	return 0;
}

int igScaleWindowsInViewport(lua_State *pl)
{
	ImGuiViewportP* viewport = (ImGuiViewportP*)lua_touserdata(pl,1);
	float scale = *(float*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiStackSizes_ImGuiStackSizes(lua_State *pl)
{
	return 1;
}

int ImVector_clear_delete(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiPopupData_destroy(lua_State *pl)
{
	ImGuiPopupData* self = (ImGuiPopupData*)lua_touserdata(pl,1);
	return 0;
}

int igDockBuilderGetNode(lua_State *pl)
{
	ImGuiID node_id = *(ImGuiID*)lua_touserdata(pl,1);
	return 1;
}

int igGetFrameHeight(lua_State *pl)
{
	return 1;
}

int igLogTextV(lua_State *pl)
{
	const char* fmt = lua_tostring(pl,1);
	va_list args = *(va_list*)lua_touserdata(pl,2);
	return 0;
}

int igBeginTabBar(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	ImGuiTabBarFlags flags = *(ImGuiTabBarFlags*)lua_touserdata(pl,2);
	return 1;
}

int igEndComboPreview(lua_State *pl)
{
	return 0;
}

int igFindWindowByID(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 1;
}

int igTableDrawContextMenu(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiListClipperData_ImGuiListClipperData(lua_State *pl)
{
	return 1;
}

int igGetFontTexUvWhitePixel(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igLabelText(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const char* fmt = lua_tostring(pl,2);
	... ... = *(...*)lua_touserdata(pl,3);
	return 0;
}

int ImGuiWindow_GetIDFromRectangle(lua_State *pl)
{
	ImGuiWindow* self = (ImGuiWindow*)lua_touserdata(pl,1);
	const ImRect r_abs = *(const ImRect*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiTableColumn_ImGuiTableColumn(lua_State *pl)
{
	return 1;
}

int ImDrawList_AddImageRounded(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	ImTextureID user_texture_id = *(ImTextureID*)lua_touserdata(pl,2);
	const ImVec2 p_min = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p_max = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 uv_min = *(const ImVec2*)lua_touserdata(pl,5);
	const ImVec2 uv_max = *(const ImVec2*)lua_touserdata(pl,6);
	ImU32 col = *(ImU32*)lua_touserdata(pl,7);
	float rounding = *(float*)lua_touserdata(pl,8);
	ImDrawFlags flags = *(ImDrawFlags*)lua_touserdata(pl,9);
	return 0;
}

int ImGuiNextItemData_ImGuiNextItemData(lua_State *pl)
{
	return 1;
}

int igImBitArrayTestBit(lua_State *pl)
{
	const ImU32* arr = (const ImU32*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 1;
}

int igImBitArraySetBitRange(lua_State *pl)
{
	ImU32* arr = (ImU32*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	int n2 = (int)lua_tonumber(pl,3);
	return 0;
}

int igGetCursorStartPos(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igImBezierCubicClosestPointCasteljau(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 p4 = *(const ImVec2*)lua_touserdata(pl,5);
	const ImVec2 p = *(const ImVec2*)lua_touserdata(pl,6);
	float tess_tol = *(float*)lua_touserdata(pl,7);
	return 0;
}

int ImGuiTabBar_destroy(lua_State *pl)
{
	ImGuiTabBar* self = (ImGuiTabBar*)lua_touserdata(pl,1);
	return 0;
}

int ImVec2_destroy(lua_State *pl)
{
	ImVec2* self = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igGetWindowViewport(lua_State *pl)
{
	return 1;
}

int ImVector_push_front(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	const T v = *(const T*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiNextWindowData_ImGuiNextWindowData(lua_State *pl)
{
	return 1;
}

int igGetWindowSize(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igIsActiveIdUsingNavDir(lua_State *pl)
{
	ImGuiDir dir = *(ImGuiDir*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawListSplitter_SetCurrentChannel(lua_State *pl)
{
	ImDrawListSplitter* self = (ImDrawListSplitter*)lua_touserdata(pl,1);
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,2);
	int channel_idx = (int)lua_tonumber(pl,3);
	return 0;
}

int ImDrawList_PathArcTo(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 center = *(const ImVec2*)lua_touserdata(pl,2);
	float radius = *(float*)lua_touserdata(pl,3);
	float a_min = *(float*)lua_touserdata(pl,4);
	float a_max = *(float*)lua_touserdata(pl,5);
	int num_segments = (int)lua_tonumber(pl,6);
	return 0;
}

int igGetKeyPressedAmount(lua_State *pl)
{
	int key_index = (int)lua_tonumber(pl,1);
	float repeat_delay = *(float*)lua_touserdata(pl,2);
	float rate = *(float*)lua_touserdata(pl,3);
	return 1;
}

int igGetFocusScope(lua_State *pl)
{
	return 1;
}

int ImGuiNextItemData_destroy(lua_State *pl)
{
	ImGuiNextItemData* self = (ImGuiNextItemData*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList__OnChangedVtxOffset(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiStackTool_destroy(lua_State *pl)
{
	ImGuiStackTool* self = (ImGuiStackTool*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiStackSizes_CompareWithCurrentState(lua_State *pl)
{
	ImGuiStackSizes* self = (ImGuiStackSizes*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiMenuColumns_DeclColumns(lua_State *pl)
{
	ImGuiMenuColumns* self = (ImGuiMenuColumns*)lua_touserdata(pl,1);
	float w_icon = *(float*)lua_touserdata(pl,2);
	float w_label = *(float*)lua_touserdata(pl,3);
	float w_shortcut = *(float*)lua_touserdata(pl,4);
	float w_mark = *(float*)lua_touserdata(pl,5);
	return 1;
}

int ImFontAtlas_AddFontFromFileTTF(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	const char* filename = lua_tostring(pl,2);
	float size_pixels = *(float*)lua_touserdata(pl,3);
	const ImFontConfig* font_cfg = (const ImFontConfig*)lua_touserdata(pl,4);
	const ImWchar* glyph_ranges = (const ImWchar*)lua_touserdata(pl,5);
	return 1;
}

int igImUpperPowerOfTwo(lua_State *pl)
{
	int v = (int)lua_tonumber(pl,1);
	return 1;
}

int igClearDragDrop(lua_State *pl)
{
	return 0;
}

int ImDrawList_ChannelsMerge(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiStackLevelInfo_ImGuiStackLevelInfo(lua_State *pl)
{
	return 1;
}

int igImBezierCubicClosestPoint(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 p4 = *(const ImVec2*)lua_touserdata(pl,5);
	const ImVec2 p = *(const ImVec2*)lua_touserdata(pl,6);
	int num_segments = (int)lua_tonumber(pl,7);
	return 0;
}

int ImGuiNavItemData_Clear(lua_State *pl)
{
	ImGuiNavItemData* self = (ImGuiNavItemData*)lua_touserdata(pl,1);
	return 0;
}

int igGetMousePosOnOpeningCurrentPopup(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int igNavMoveRequestCancel(lua_State *pl)
{
	return 0;
}

int ImGuiListClipperRange_FromIndices(lua_State *pl)
{
	int min = (int)lua_tonumber(pl,1);
	int max = (int)lua_tonumber(pl,2);
	return 1;
}

int ImSpan_begin(lua_State *pl)
{
	ImSpan* self = (ImSpan*)lua_touserdata(pl,1);
	return 1;
}

int igDebugNodeTabBar(lua_State *pl)
{
	ImGuiTabBar* tab_bar = (ImGuiTabBar*)lua_touserdata(pl,1);
	const char* label = lua_tostring(pl,2);
	return 0;
}

int ImGuiTableColumnSettings_destroy(lua_State *pl)
{
	ImGuiTableColumnSettings* self = (ImGuiTableColumnSettings*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiStorage_GetVoidPtr(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiInputTextState_ClearText(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiMenuColumns_Update(lua_State *pl)
{
	ImGuiMenuColumns* self = (ImGuiMenuColumns*)lua_touserdata(pl,1);
	float spacing = *(float*)lua_touserdata(pl,2);
	bool window_reappearing = lua_toboolean(pl,3);
	return 0;
}

int ImRect_destroy(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	return 0;
}

int igDockContextRebuildNodes(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int igGetScrollX(lua_State *pl)
{
	return 1;
}

int ImGuiNavItemData_destroy(lua_State *pl)
{
	ImGuiNavItemData* self = (ImGuiNavItemData*)lua_touserdata(pl,1);
	return 0;
}

int ImPool_destroy(lua_State *pl)
{
	ImPool* self = (ImPool*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiPlatformIO_ImGuiPlatformIO(lua_State *pl)
{
	return 1;
}

int igDragScalar(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,2);
	void* p_data = (void*)lua_touserdata(pl,3);
	float v_speed = *(float*)lua_touserdata(pl,4);
	const void* p_min = (const void*)lua_touserdata(pl,5);
	const void* p_max = (const void*)lua_touserdata(pl,6);
	const char* format = lua_tostring(pl,7);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,8);
	return 1;
}

int ImFontAtlas_AddFontFromMemoryTTF(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	void* font_data = (void*)lua_touserdata(pl,2);
	int font_size = (int)lua_tonumber(pl,3);
	float size_pixels = *(float*)lua_touserdata(pl,4);
	const ImFontConfig* font_cfg = (const ImFontConfig*)lua_touserdata(pl,5);
	const ImWchar* glyph_ranges = (const ImWchar*)lua_touserdata(pl,6);
	return 1;
}

int igGetKeyIndex(lua_State *pl)
{
	ImGuiKey imgui_key = *(ImGuiKey*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiTextBuffer_end(lua_State *pl)
{
	ImGuiTextBuffer* self = (ImGuiTextBuffer*)lua_touserdata(pl,1);
	return 1;
}

int igClosePopupToLevel(lua_State *pl)
{
	int remaining = (int)lua_tonumber(pl,1);
	bool restore_focus_to_window_under_popup = lua_toboolean(pl,2);
	return 0;
}

int igRenderText(lua_State *pl)
{
	ImVec2 pos = *(ImVec2*)lua_touserdata(pl,1);
	const char* text = lua_tostring(pl,2);
	const char* text_end = lua_tostring(pl,3);
	bool hide_text_after_hash = lua_toboolean(pl,4);
	return 0;
}

int ImGuiWindowSettings_ImGuiWindowSettings(lua_State *pl)
{
	return 1;
}

int ImGuiDockNode_IsLeafNode(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int igPushStyleVar(lua_State *pl)
{
	ImGuiStyleVar idx = *(ImGuiStyleVar*)lua_touserdata(pl,1);
	float val = *(float*)lua_touserdata(pl,2);
	return 0;
}

int igInputInt4(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int[4] v = *(int[4]*)lua_touserdata(pl,2);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,3);
	return 1;
}

int igFindOrCreateColumns(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	return 1;
}

int igImParseFormatFindStart(lua_State *pl)
{
	const char* format = lua_tostring(pl,1);
	return 1;
}

int igItemSize(lua_State *pl)
{
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,1);
	float text_baseline_y = *(float*)lua_touserdata(pl,2);
	return 0;
}

int igFindBestWindowPosForPopup(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiTextFilter_IsActive(lua_State *pl)
{
	ImGuiTextFilter* self = (ImGuiTextFilter*)lua_touserdata(pl,1);
	return 1;
}

int igImRsqrt(lua_State *pl)
{
	float x = *(float*)lua_touserdata(pl,1);
	return 1;
}

int igGetColumnOffsetFromNorm(lua_State *pl)
{
	const ImGuiOldColumns* columns = (const ImGuiOldColumns*)lua_touserdata(pl,1);
	float offset_norm = *(float*)lua_touserdata(pl,2);
	return 1;
}

int igEndColumns(lua_State *pl)
{
	return 0;
}

int ImGuiMenuColumns_ImGuiMenuColumns(lua_State *pl)
{
	return 1;
}

int ImGuiPtrOrIndex_ImGuiPtrOrIndex(lua_State *pl)
{
	void* ptr = (void*)lua_touserdata(pl,1);
	return 1;
}

int igEnd(lua_State *pl)
{
	return 0;
}

int ImGuiStorage_SetInt(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	int val = (int)lua_tonumber(pl,3);
	return 0;
}

int igEndChildFrame(lua_State *pl)
{
	return 0;
}

int igImPow(lua_State *pl)
{
	float x = *(float*)lua_touserdata(pl,1);
	float y = *(float*)lua_touserdata(pl,2);
	return 1;
}

int igIsWindowNavFocusable(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiInputTextState_GetSelectionStart(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiWindowClass_ImGuiWindowClass(lua_State *pl)
{
	return 1;
}

int igSetNextWindowFocus(lua_State *pl)
{
	return 0;
}

int ImGuiWindow_Rect(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	ImGuiWindow* self = (ImGuiWindow*)lua_touserdata(pl,2);
	return 0;
}

int igIsMouseDragPastThreshold(lua_State *pl)
{
	ImGuiMouseButton button = *(ImGuiMouseButton*)lua_touserdata(pl,1);
	float lock_threshold = *(float*)lua_touserdata(pl,2);
	return 1;
}

int ImDrawData_ImDrawData(lua_State *pl)
{
	return 1;
}

int ImGuiViewportP_ImGuiViewportP(lua_State *pl)
{
	return 1;
}

int igClosePopupsExceptModals(lua_State *pl)
{
	return 0;
}

int ImGuiDockNode_IsHiddenTabBar(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawList_ChannelsSetCurrent(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 0;
}

int ImGuiWindow_destroy(lua_State *pl)
{
	ImGuiWindow* self = (ImGuiWindow*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList_AddBezierCubic(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 p4 = *(const ImVec2*)lua_touserdata(pl,5);
	ImU32 col = *(ImU32*)lua_touserdata(pl,6);
	float thickness = *(float*)lua_touserdata(pl,7);
	int num_segments = (int)lua_tonumber(pl,8);
	return 0;
}

int ImBitArray_SetBit(lua_State *pl)
{
	ImBitArray* self = (ImBitArray*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 0;
}

int ImGuiViewportP_UpdateWorkRect(lua_State *pl)
{
	ImGuiViewportP* self = (ImGuiViewportP*)lua_touserdata(pl,1);
	return 0;
}

int ImRect_GetCenter(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImRect* self = (ImRect*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawList_AddRectFilledMultiColor(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p_min = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p_max = *(const ImVec2*)lua_touserdata(pl,3);
	ImU32 col_upr_left = *(ImU32*)lua_touserdata(pl,4);
	ImU32 col_upr_right = *(ImU32*)lua_touserdata(pl,5);
	ImU32 col_bot_right = *(ImU32*)lua_touserdata(pl,6);
	ImU32 col_bot_left = *(ImU32*)lua_touserdata(pl,7);
	return 0;
}

int igNavMoveRequestSubmit(lua_State *pl)
{
	ImGuiDir move_dir = *(ImGuiDir*)lua_touserdata(pl,1);
	ImGuiDir clip_dir = *(ImGuiDir*)lua_touserdata(pl,2);
	ImGuiNavMoveFlags move_flags = *(ImGuiNavMoveFlags*)lua_touserdata(pl,3);
	ImGuiScrollFlags scroll_flags = *(ImGuiScrollFlags*)lua_touserdata(pl,4);
	return 0;
}

int ImDrawList_ImDrawList(lua_State *pl)
{
	const ImDrawListSharedData* shared_data = (const ImDrawListSharedData*)lua_touserdata(pl,1);
	return 1;
}

int ImFontAtlasCustomRect_ImFontAtlasCustomRect(lua_State *pl)
{
	return 1;
}

int ImGuiStackSizes_SetToCurrentState(lua_State *pl)
{
	ImGuiStackSizes* self = (ImGuiStackSizes*)lua_touserdata(pl,1);
	return 0;
}

int igFindOrCreateWindowSettings(lua_State *pl)
{
	const char* name = lua_tostring(pl,1);
	return 1;
}

int ImGuiInputTextCallbackData_SelectAll(lua_State *pl)
{
	ImGuiInputTextCallbackData* self = (ImGuiInputTextCallbackData*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawListSharedData_SetCircleTessellationMaxError(lua_State *pl)
{
	ImDrawListSharedData* self = (ImDrawListSharedData*)lua_touserdata(pl,1);
	float max_error = *(float*)lua_touserdata(pl,2);
	return 0;
}

int ImColor_HSV(lua_State *pl)
{
	ImColor* pOut = (ImColor*)lua_touserdata(pl,1);
	float h = *(float*)lua_touserdata(pl,2);
	float s = *(float*)lua_touserdata(pl,3);
	float v = *(float*)lua_touserdata(pl,4);
	float a = *(float*)lua_touserdata(pl,5);
	return 0;
}

int ImVector_shrink(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	int new_size = (int)lua_tonumber(pl,2);
	return 0;
}

int ImSpan_ImSpan(lua_State *pl)
{
	return 1;
}

int ImGuiStyle_destroy(lua_State *pl)
{
	ImGuiStyle* self = (ImGuiStyle*)lua_touserdata(pl,1);
	return 0;
}

int igDataTypeApplyOpFromText(lua_State *pl)
{
	const char* buf = lua_tostring(pl,1);
	const char* initial_value_buf = lua_tostring(pl,2);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,3);
	void* p_data = (void*)lua_touserdata(pl,4);
	const char* format = lua_tostring(pl,5);
	return 1;
}

int ImGuiTextBuffer_c_str(lua_State *pl)
{
	ImGuiTextBuffer* self = (ImGuiTextBuffer*)lua_touserdata(pl,1);
	return 1;
}

int ImFontAtlas_GetGlyphRangesChineseFull(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int igSetColorEditOptions(lua_State *pl)
{
	ImGuiColorEditFlags flags = *(ImGuiColorEditFlags*)lua_touserdata(pl,1);
	return 0;
}

int ImRect_GetHeight(lua_State *pl)
{
	ImRect* self = (ImRect*)lua_touserdata(pl,1);
	return 1;
}

int igBeginPopupContextWindow(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	ImGuiPopupFlags popup_flags = *(ImGuiPopupFlags*)lua_touserdata(pl,2);
	return 1;
}

int igTranslateWindowsInViewport(lua_State *pl)
{
	ImGuiViewportP* viewport = (ImGuiViewportP*)lua_touserdata(pl,1);
	const ImVec2 old_pos = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 new_pos = *(const ImVec2*)lua_touserdata(pl,3);
	return 0;
}

int ImDrawList__ClearFreeMemory(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList_PopTextureID(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int ImFont_SetGlyphVisible(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	ImWchar c = *(ImWchar*)lua_touserdata(pl,2);
	bool visible = lua_toboolean(pl,3);
	return 0;
}

int igClosePopupsOverWindow(lua_State *pl)
{
	ImGuiWindow* ref_window = (ImGuiWindow*)lua_touserdata(pl,1);
	bool restore_focus_to_window_under_popup = lua_toboolean(pl,2);
	return 0;
}

int ImVector_insert(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	const T* it = (const T*)lua_touserdata(pl,2);
	const T v = *(const T*)lua_touserdata(pl,3);
	return 1;
}

int ImVector_find_erase_unsorted(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	const T v = *(const T*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiInputTextState_CursorAnimReset(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 0;
}

int igBullet(lua_State *pl)
{
	return 0;
}

int ImGuiInputTextState_GetUndoAvailCount(lua_State *pl)
{
	ImGuiInputTextState* self = (ImGuiInputTextState*)lua_touserdata(pl,1);
	return 1;
}

int ImFontAtlas_GetTexDataAsRGBA32(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	unsigned char** out_pixels = (unsigned char**)lua_touserdata(pl,2);
	int* out_width = (int*)lua_touserdata(pl,3);
	int* out_height = (int*)lua_touserdata(pl,4);
	int* out_bytes_per_pixel = (int*)lua_touserdata(pl,5);
	return 0;
}

int igTableSettingsInstallHandler(lua_State *pl)
{
	ImGuiContext* context = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int igRenderTextClippedEx(lua_State *pl)
{
	ImDrawList* draw_list = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 pos_min = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 pos_max = *(const ImVec2*)lua_touserdata(pl,3);
	const char* text = lua_tostring(pl,4);
	const char* text_end = lua_tostring(pl,5);
	const ImVec2* text_size_if_known = (const ImVec2*)lua_touserdata(pl,6);
	const ImVec2 align = *(const ImVec2*)lua_touserdata(pl,7);
	const ImRect* clip_rect = (const ImRect*)lua_touserdata(pl,8);
	return 0;
}

int igButton(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,2);
	return 1;
}

int igButtonBehavior(lua_State *pl)
{
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	bool* out_hovered = (bool*)lua_touserdata(pl,3);
	bool* out_held = (bool*)lua_touserdata(pl,4);
	ImGuiButtonFlags flags = *(ImGuiButtonFlags*)lua_touserdata(pl,5);
	return 1;
}

int ImGuiStyle_ScaleAllSizes(lua_State *pl)
{
	ImGuiStyle* self = (ImGuiStyle*)lua_touserdata(pl,1);
	float scale_factor = *(float*)lua_touserdata(pl,2);
	return 0;
}

int igSetNextWindowSizeConstraints(lua_State *pl)
{
	const ImVec2 size_min = *(const ImVec2*)lua_touserdata(pl,1);
	const ImVec2 size_max = *(const ImVec2*)lua_touserdata(pl,2);
	ImGuiSizeCallback custom_callback = *(ImGuiSizeCallback*)lua_touserdata(pl,3);
	void* custom_callback_data = (void*)lua_touserdata(pl,4);
	return 0;
}

int igCaptureMouseFromApp(lua_State *pl)
{
	bool want_capture_mouse_value = lua_toboolean(pl,1);
	return 0;
}

int ImGuiTabItem_destroy(lua_State *pl)
{
	ImGuiTabItem* self = (ImGuiTabItem*)lua_touserdata(pl,1);
	return 0;
}

int ImVector_push_back(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	const T v = *(const T*)lua_touserdata(pl,2);
	return 0;
}

int igDestroyPlatformWindow(lua_State *pl)
{
	ImGuiViewportP* viewport = (ImGuiViewportP*)lua_touserdata(pl,1);
	return 0;
}

int ImChunkStream_end(lua_State *pl)
{
	ImChunkStream* self = (ImChunkStream*)lua_touserdata(pl,1);
	return 1;
}

int igRenderFrame(lua_State *pl)
{
	ImVec2 p_min = *(ImVec2*)lua_touserdata(pl,1);
	ImVec2 p_max = *(ImVec2*)lua_touserdata(pl,2);
	ImU32 fill_col = *(ImU32*)lua_touserdata(pl,3);
	bool border = lua_toboolean(pl,4);
	float rounding = *(float*)lua_touserdata(pl,5);
	return 0;
}

int igColorEdit4(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	float[4] col = *(float[4]*)lua_touserdata(pl,2);
	ImGuiColorEditFlags flags = *(ImGuiColorEditFlags*)lua_touserdata(pl,3);
	return 1;
}

int igGetIO(lua_State *pl)
{
	return 1;
}

int igUpdateHoveredWindowAndCaptureFlags(lua_State *pl)
{
	return 0;
}

int igColumns(lua_State *pl)
{
	int count = (int)lua_tonumber(pl,1);
	const char* id = lua_tostring(pl,2);
	bool border = lua_toboolean(pl,3);
	return 0;
}

int igFocusTopMostWindowUnderOne(lua_State *pl)
{
	ImGuiWindow* under_this_window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiWindow* ignore_window = (ImGuiWindow*)lua_touserdata(pl,2);
	return 0;
}

int ImFontAtlas_AddFontFromMemoryCompressedTTF(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	const void* compressed_font_data = (const void*)lua_touserdata(pl,2);
	int compressed_font_size = (int)lua_tonumber(pl,3);
	float size_pixels = *(float*)lua_touserdata(pl,4);
	const ImFontConfig* font_cfg = (const ImFontConfig*)lua_touserdata(pl,5);
	const ImWchar* glyph_ranges = (const ImWchar*)lua_touserdata(pl,6);
	return 1;
}

int igFindBottomMostVisibleWindowWithinBeginStack(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiTextBuffer_size(lua_State *pl)
{
	ImGuiTextBuffer* self = (ImGuiTextBuffer*)lua_touserdata(pl,1);
	return 1;
}

int igDataTypeGetInfo(lua_State *pl)
{
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,1);
	return 1;
}

int ImRect_GetBL(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImRect* self = (ImRect*)lua_touserdata(pl,2);
	return 0;
}

int igBeginDragDropTargetCustom(lua_State *pl)
{
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,1);
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiViewport_GetCenter(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImGuiViewport* self = (ImGuiViewport*)lua_touserdata(pl,2);
	return 0;
}

int igFindWindowByName(lua_State *pl)
{
	const char* name = lua_tostring(pl,1);
	return 1;
}

int igInputScalar(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,2);
	void* p_data = (void*)lua_touserdata(pl,3);
	const void* p_step = (const void*)lua_touserdata(pl,4);
	const void* p_step_fast = (const void*)lua_touserdata(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,7);
	return 1;
}

int igFindViewportByID(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 1;
}

int igGetScrollY(lua_State *pl)
{
	return 1;
}

int igButtonEx(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const ImVec2 size_arg = *(const ImVec2*)lua_touserdata(pl,2);
	ImGuiButtonFlags flags = *(ImGuiButtonFlags*)lua_touserdata(pl,3);
	return 1;
}

int igDebugStartItemPicker(lua_State *pl)
{
	return 0;
}

int ImVec2ih_destroy(lua_State *pl)
{
	ImVec2ih* self = (ImVec2ih*)lua_touserdata(pl,1);
	return 0;
}

int igSelectable(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	bool selected = lua_toboolean(pl,2);
	ImGuiSelectableFlags flags = *(ImGuiSelectableFlags*)lua_touserdata(pl,3);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,4);
	return 1;
}

int igImStrchrRange(lua_State *pl)
{
	const char* str_begin = lua_tostring(pl,1);
	const char* str_end = lua_tostring(pl,2);
	char c = *(char*)lua_touserdata(pl,3);
	return 1;
}

int ImGuiTabBar_GetTabName(lua_State *pl)
{
	ImGuiTabBar* self = (ImGuiTabBar*)lua_touserdata(pl,1);
	const ImGuiTabItem* tab = (const ImGuiTabItem*)lua_touserdata(pl,2);
	return 1;
}

int igDockBuilderDockWindow(lua_State *pl)
{
	const char* window_name = lua_tostring(pl,1);
	ImGuiID node_id = *(ImGuiID*)lua_touserdata(pl,2);
	return 0;
}

int igBeginComboPopup(lua_State *pl)
{
	ImGuiID popup_id = *(ImGuiID*)lua_touserdata(pl,1);
	const ImRect bb = *(const ImRect*)lua_touserdata(pl,2);
	ImGuiComboFlags flags = *(ImGuiComboFlags*)lua_touserdata(pl,3);
	return 1;
}

int igColorButton(lua_State *pl)
{
	const char* desc_id = lua_tostring(pl,1);
	const ImVec4 col = *(const ImVec4*)lua_touserdata(pl,2);
	ImGuiColorEditFlags flags = *(ImGuiColorEditFlags*)lua_touserdata(pl,3);
	ImVec2 size = *(ImVec2*)lua_touserdata(pl,4);
	return 1;
}

int ImVec2_ImVec2(lua_State *pl)
{
	return 1;
}

int igDockContextQueueDock(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	ImGuiWindow* target = (ImGuiWindow*)lua_touserdata(pl,2);
	ImGuiDockNode* target_node = (ImGuiDockNode*)lua_touserdata(pl,3);
	ImGuiWindow* payload = (ImGuiWindow*)lua_touserdata(pl,4);
	ImGuiDir split_dir = *(ImGuiDir*)lua_touserdata(pl,5);
	float split_ratio = *(float*)lua_touserdata(pl,6);
	bool split_outer = lua_toboolean(pl,7);
	return 0;
}

int igPopTextWrapPos(lua_State *pl)
{
	return 0;
}

int igTextEx(lua_State *pl)
{
	const char* text = lua_tostring(pl,1);
	const char* text_end = lua_tostring(pl,2);
	ImGuiTextFlags flags = *(ImGuiTextFlags*)lua_touserdata(pl,3);
	return 0;
}

int igDockContextGenNodeID(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	return 1;
}

int igDockContextInitialize(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int igDockBuilderRemoveNodeDockedWindows(lua_State *pl)
{
	ImGuiID node_id = *(ImGuiID*)lua_touserdata(pl,1);
	bool clear_settings_refs = lua_toboolean(pl,2);
	return 0;
}

int ImFont_ImFont(lua_State *pl)
{
	return 1;
}

int igDockNodeGetRootNode(lua_State *pl)
{
	ImGuiDockNode* node = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int igDockNodeIsInHierarchyOf(lua_State *pl)
{
	ImGuiDockNode* node = (ImGuiDockNode*)lua_touserdata(pl,1);
	ImGuiDockNode* parent = (ImGuiDockNode*)lua_touserdata(pl,2);
	return 1;
}

int igDockSpace(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,2);
	ImGuiDockNodeFlags flags = *(ImGuiDockNodeFlags*)lua_touserdata(pl,3);
	const ImGuiWindowClass* window_class = (const ImGuiWindowClass*)lua_touserdata(pl,4);
	return 1;
}

int ImFontConfig_ImFontConfig(lua_State *pl)
{
	return 1;
}

int ImDrawList__PathArcToFastEx(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 center = *(const ImVec2*)lua_touserdata(pl,2);
	float radius = *(float*)lua_touserdata(pl,3);
	int a_min_sample = (int)lua_tonumber(pl,4);
	int a_max_sample = (int)lua_tonumber(pl,5);
	int a_step = (int)lua_tonumber(pl,6);
	return 0;
}

int igEndMenu(lua_State *pl)
{
	return 0;
}

int igDragInt(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int* v = (int*)lua_touserdata(pl,2);
	float v_speed = *(float*)lua_touserdata(pl,3);
	int v_min = (int)lua_tonumber(pl,4);
	int v_max = (int)lua_tonumber(pl,5);
	const char* format = lua_tostring(pl,6);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,7);
	return 1;
}

int igPopItemWidth(lua_State *pl)
{
	return 0;
}

int ImGuiListClipper_Begin(lua_State *pl)
{
	ImGuiListClipper* self = (ImGuiListClipper*)lua_touserdata(pl,1);
	int items_count = (int)lua_tonumber(pl,2);
	float items_height = *(float*)lua_touserdata(pl,3);
	return 0;
}

int igBeginMenu(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	bool enabled = lua_toboolean(pl,2);
	return 1;
}

int ImBitVector_ClearBit(lua_State *pl)
{
	ImBitVector* self = (ImBitVector*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 0;
}

int ImDrawListSplitter_destroy(lua_State *pl)
{
	ImDrawListSplitter* self = (ImDrawListSplitter*)lua_touserdata(pl,1);
	return 0;
}

int igGetMergedKeyModFlags(lua_State *pl)
{
	return 1;
}

int igEndFrame(lua_State *pl)
{
	return 0;
}

int ImGuiDockNode_IsEmpty(lua_State *pl)
{
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawList_PathLineToMergeDuplicate(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 pos = *(const ImVec2*)lua_touserdata(pl,2);
	return 0;
}

int igGetWindowDockID(lua_State *pl)
{
	return 1;
}

int ImRect_GetBR(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	ImRect* self = (ImRect*)lua_touserdata(pl,2);
	return 0;
}

int igCollapsingHeader(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	ImGuiTreeNodeFlags flags = *(ImGuiTreeNodeFlags*)lua_touserdata(pl,2);
	return 1;
}

int igBeginPopupContextItem(lua_State *pl)
{
	const char* str_id = lua_tostring(pl,1);
	ImGuiPopupFlags popup_flags = *(ImGuiPopupFlags*)lua_touserdata(pl,2);
	return 1;
}

int igCombo(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int* current_item = (int*)lua_touserdata(pl,2);
	const char* const[] items = (const char* const[])lua_touserdata(pl,3);
	int items_count = (int)lua_tonumber(pl,4);
	int popup_max_height_in_items = (int)lua_tonumber(pl,5);
	return 1;
}

int igUpdateMouseMovingWindowNewFrame(lua_State *pl)
{
	return 0;
}

int igTableGetColumnFlags(lua_State *pl)
{
	int column_n = (int)lua_tonumber(pl,1);
	return 1;
}

int igGetAllocatorFunctions(lua_State *pl)
{
	ImGuiMemAllocFunc* p_alloc_func = (ImGuiMemAllocFunc*)lua_touserdata(pl,1);
	ImGuiMemFreeFunc* p_free_func = (ImGuiMemFreeFunc*)lua_touserdata(pl,2);
	void** p_user_data = (void**)lua_touserdata(pl,3);
	return 0;
}

int igEndCombo(lua_State *pl)
{
	return 0;
}

int ImDrawList_AddQuadFilled(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	const ImVec2 p1 = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 p2 = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p3 = *(const ImVec2*)lua_touserdata(pl,4);
	const ImVec2 p4 = *(const ImVec2*)lua_touserdata(pl,5);
	ImU32 col = *(ImU32*)lua_touserdata(pl,6);
	return 0;
}

int igLogButtons(lua_State *pl)
{
	return 0;
}

int igBeginMenuEx(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const char* icon = lua_tostring(pl,2);
	bool enabled = lua_toboolean(pl,3);
	return 1;
}

int igGetDrawListSharedData(lua_State *pl)
{
	return 1;
}

int ImDrawList_PathStroke(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	ImU32 col = *(ImU32*)lua_touserdata(pl,2);
	ImDrawFlags flags = *(ImDrawFlags*)lua_touserdata(pl,3);
	float thickness = *(float*)lua_touserdata(pl,4);
	return 0;
}

int igDockContextQueueUndockNode(lua_State *pl)
{
	ImGuiContext* ctx = (ImGuiContext*)lua_touserdata(pl,1);
	ImGuiDockNode* node = (ImGuiDockNode*)lua_touserdata(pl,2);
	return 0;
}

int ImVector_empty(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 1;
}

int ImVector_reserve(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	int new_capacity = (int)lua_tonumber(pl,2);
	return 0;
}

int igGetIDWithSeed(lua_State *pl)
{
	const char* str_id_begin = lua_tostring(pl,1);
	const char* str_id_end = lua_tostring(pl,2);
	ImGuiID seed = *(ImGuiID*)lua_touserdata(pl,3);
	return 1;
}

int igGetItemFlags(lua_State *pl)
{
	return 1;
}

int igTableSortSpecsBuild(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igGetItemRectSize(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int ImFontAtlas_ClearTexData(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 0;
}

int igBeginTooltipEx(lua_State *pl)
{
	ImGuiTooltipFlags tooltip_flags = *(ImGuiTooltipFlags*)lua_touserdata(pl,1);
	ImGuiWindowFlags extra_window_flags = *(ImGuiWindowFlags*)lua_touserdata(pl,2);
	return 0;
}

int igGetMousePos(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	return 0;
}

int ImSpanAllocator_GetSpanPtrBegin(lua_State *pl)
{
	ImSpanAllocator* self = (ImSpanAllocator*)lua_touserdata(pl,1);
	int n = (int)lua_tonumber(pl,2);
	return 1;
}

int ImDrawCmd_GetTexID(lua_State *pl)
{
	ImDrawCmd* self = (ImDrawCmd*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiStyleMod_destroy(lua_State *pl)
{
	ImGuiStyleMod* self = (ImGuiStyleMod*)lua_touserdata(pl,1);
	return 0;
}

int igImStrbolW(lua_State *pl)
{
	const ImWchar* buf_mid_line = (const ImWchar*)lua_touserdata(pl,1);
	const ImWchar* buf_begin = (const ImWchar*)lua_touserdata(pl,2);
	return 1;
}

int igGetPlatformIO(lua_State *pl)
{
	return 1;
}

int igDragIntRange2(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int* v_current_min = (int*)lua_touserdata(pl,2);
	int* v_current_max = (int*)lua_touserdata(pl,3);
	float v_speed = *(float*)lua_touserdata(pl,4);
	int v_min = (int)lua_tonumber(pl,5);
	int v_max = (int)lua_tonumber(pl,6);
	const char* format = lua_tostring(pl,7);
	const char* format_max = lua_tostring(pl,8);
	ImGuiSliderFlags flags = *(ImGuiSliderFlags*)lua_touserdata(pl,9);
	return 1;
}

int igBeginListBox(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	const ImVec2 size = *(const ImVec2*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiListClipper_destroy(lua_State *pl)
{
	ImGuiListClipper* self = (ImGuiListClipper*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiWindowSettings_GetName(lua_State *pl)
{
	ImGuiWindowSettings* self = (ImGuiWindowSettings*)lua_touserdata(pl,1);
	return 1;
}

int igGetTreeNodeToLabelSpacing(lua_State *pl)
{
	return 1;
}

int igGetViewportPlatformMonitor(lua_State *pl)
{
	ImGuiViewport* viewport = (ImGuiViewport*)lua_touserdata(pl,1);
	return 1;
}

int igDebugNodeDrawList(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiViewportP* viewport = (ImGuiViewportP*)lua_touserdata(pl,2);
	const ImDrawList* draw_list = (const ImDrawList*)lua_touserdata(pl,3);
	const char* label = lua_tostring(pl,4);
	return 0;
}

int ImFontGlyphRangesBuilder_SetBit(lua_State *pl)
{
	ImFontGlyphRangesBuilder* self = (ImFontGlyphRangesBuilder*)lua_touserdata(pl,1);
	size_t n = *(size_t*)lua_touserdata(pl,2);
	return 0;
}

int igGetWindowDrawList(lua_State *pl)
{
	return 1;
}

int igGetWindowHeight(lua_State *pl)
{
	return 1;
}

int igGetWindowScrollbarID(lua_State *pl)
{
	ImGuiWindow* window = (ImGuiWindow*)lua_touserdata(pl,1);
	ImGuiAxis axis = *(ImGuiAxis*)lua_touserdata(pl,2);
	return 1;
}

int ImFontAtlas_Clear(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 0;
}

int ImChunkStream_swap(lua_State *pl)
{
	ImChunkStream* self = (ImChunkStream*)lua_touserdata(pl,1);
	ImChunkStream* rhs = (ImChunkStream*)lua_touserdata(pl,2);
	return 0;
}

int igCloseCurrentPopup(lua_State *pl)
{
	return 0;
}

int igGetCursorPosX(lua_State *pl)
{
	return 1;
}

int igRadioButton(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	bool active = lua_toboolean(pl,2);
	return 1;
}

int igMarkIniSettingsDirty(lua_State *pl)
{
	return 0;
}

int igGetWindowWidth(lua_State *pl)
{
	return 1;
}

int igImFileWrite(lua_State *pl)
{
	const void* data = (const void*)lua_touserdata(pl,1);
	ImU64 size = *(ImU64*)lua_touserdata(pl,2);
	ImU64 count = *(ImU64*)lua_touserdata(pl,3);
	ImFileHandle file = *(ImFileHandle*)lua_touserdata(pl,4);
	return 1;
}

int ImFontAtlas_CalcCustomRectUV(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	const ImFontAtlasCustomRect* rect = (const ImFontAtlasCustomRect*)lua_touserdata(pl,2);
	ImVec2* out_uv_min = (ImVec2*)lua_touserdata(pl,3);
	ImVec2* out_uv_max = (ImVec2*)lua_touserdata(pl,4);
	return 0;
}

int igImAbs(lua_State *pl)
{
	int x = (int)lua_tonumber(pl,1);
	return 1;
}

int ImGuiIO_AddFocusEvent(lua_State *pl)
{
	ImGuiIO* self = (ImGuiIO*)lua_touserdata(pl,1);
	bool focused = lua_toboolean(pl,2);
	return 0;
}

int igFindViewportByPlatformHandle(lua_State *pl)
{
	void* platform_handle = (void*)lua_touserdata(pl,1);
	return 1;
}

int igSetNavID(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiNavLayer nav_layer = *(ImGuiNavLayer*)lua_touserdata(pl,2);
	ImGuiID focus_scope_id = *(ImGuiID*)lua_touserdata(pl,3);
	const ImRect rect_rel = *(const ImRect*)lua_touserdata(pl,4);
	return 0;
}

int igInputScalarN(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,2);
	void* p_data = (void*)lua_touserdata(pl,3);
	int components = (int)lua_tonumber(pl,4);
	const void* p_step = (const void*)lua_touserdata(pl,5);
	const void* p_step_fast = (const void*)lua_touserdata(pl,6);
	const char* format = lua_tostring(pl,7);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,8);
	return 1;
}

int ImFontAtlas_GetGlyphRangesCyrillic(lua_State *pl)
{
	ImFontAtlas* self = (ImFontAtlas*)lua_touserdata(pl,1);
	return 1;
}

int igImFontAtlasBuildRender32bppRectFromString(lua_State *pl)
{
	ImFontAtlas* atlas = (ImFontAtlas*)lua_touserdata(pl,1);
	int x = (int)lua_tonumber(pl,2);
	int y = (int)lua_tonumber(pl,3);
	int w = (int)lua_tonumber(pl,4);
	int h = (int)lua_tonumber(pl,5);
	const char* in_str = lua_tostring(pl,6);
	char in_marker_char = *(char*)lua_touserdata(pl,7);
	unsigned int in_marker_pixel_value = *(unsigned int*)lua_touserdata(pl,8);
	return 0;
}

int ImFont_destroy(lua_State *pl)
{
	ImFont* self = (ImFont*)lua_touserdata(pl,1);
	return 0;
}

int ImDrawList_AddDrawCmd(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiDockNode_Rect(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	ImGuiDockNode* self = (ImGuiDockNode*)lua_touserdata(pl,2);
	return 0;
}

int igImFontAtlasBuildPackCustomRects(lua_State *pl)
{
	ImFontAtlas* atlas = (ImFontAtlas*)lua_touserdata(pl,1);
	void* stbrp_context_opaque = (void*)lua_touserdata(pl,2);
	return 0;
}

int ImGuiOldColumnData_ImGuiOldColumnData(lua_State *pl)
{
	return 1;
}

int igClearIniSettings(lua_State *pl)
{
	return 0;
}

int igDebugNodeStorage(lua_State *pl)
{
	ImGuiStorage* storage = (ImGuiStorage*)lua_touserdata(pl,1);
	const char* label = lua_tostring(pl,2);
	return 0;
}

int igImParseFormatFindEnd(lua_State *pl)
{
	const char* format = lua_tostring(pl,1);
	return 1;
}

int igImParseFormatPrecision(lua_State *pl)
{
	const char* format = lua_tostring(pl,1);
	int default_value = (int)lua_tonumber(pl,2);
	return 1;
}

int igImSaturate(lua_State *pl)
{
	float f = *(float*)lua_touserdata(pl,1);
	return 1;
}

int igTableFindByID(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiTextRange_ImGuiTextRange(lua_State *pl)
{
	return 1;
}

int igImStrdup(lua_State *pl)
{
	const char* str = lua_tostring(pl,1);
	return 1;
}

int igImStreolRange(lua_State *pl)
{
	const char* str = lua_tostring(pl,1);
	const char* str_end = lua_tostring(pl,2);
	return 1;
}

int igImStricmp(lua_State *pl)
{
	const char* str1 = lua_tostring(pl,1);
	const char* str2 = lua_tostring(pl,2);
	return 1;
}

int ImGuiContextHook_ImGuiContextHook(lua_State *pl)
{
	return 1;
}

int ImGuiIO_AddInputCharacter(lua_State *pl)
{
	ImGuiIO* self = (ImGuiIO*)lua_touserdata(pl,1);
	unsigned int c = *(unsigned int*)lua_touserdata(pl,2);
	return 0;
}

int igInputInt3(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int[3] v = *(int[3]*)lua_touserdata(pl,2);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,3);
	return 1;
}

int igBeginTabItem(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	bool* p_open = (bool*)lua_touserdata(pl,2);
	ImGuiTabItemFlags flags = *(ImGuiTabItemFlags*)lua_touserdata(pl,3);
	return 1;
}

int ImGuiDockContext_destroy(lua_State *pl)
{
	ImGuiDockContext* self = (ImGuiDockContext*)lua_touserdata(pl,1);
	return 0;
}

int igGetTopMostPopupModal(lua_State *pl)
{
	return 1;
}

int igTableSetBgColor(lua_State *pl)
{
	ImGuiTableBgTarget target = *(ImGuiTableBgTarget*)lua_touserdata(pl,1);
	ImU32 color = *(ImU32*)lua_touserdata(pl,2);
	int column_n = (int)lua_tonumber(pl,3);
	return 0;
}

int igDockBuilderSetNodePos(lua_State *pl)
{
	ImGuiID node_id = *(ImGuiID*)lua_touserdata(pl,1);
	ImVec2 pos = *(ImVec2*)lua_touserdata(pl,2);
	return 0;
}

int ImDrawData_DeIndexAllBuffers(lua_State *pl)
{
	ImDrawData* self = (ImDrawData*)lua_touserdata(pl,1);
	return 0;
}

int igInputInt2(lua_State *pl)
{
	const char* label = lua_tostring(pl,1);
	int[2] v = *(int[2]*)lua_touserdata(pl,2);
	ImGuiInputTextFlags flags = *(ImGuiInputTextFlags*)lua_touserdata(pl,3);
	return 1;
}

int ImGuiTabBar_ImGuiTabBar(lua_State *pl)
{
	return 1;
}

int ImSpanAllocator_SetArenaBasePtr(lua_State *pl)
{
	ImSpanAllocator* self = (ImSpanAllocator*)lua_touserdata(pl,1);
	void* base_ptr = (void*)lua_touserdata(pl,2);
	return 0;
}

int igImLineClosestPoint(lua_State *pl)
{
	ImVec2* pOut = (ImVec2*)lua_touserdata(pl,1);
	const ImVec2 a = *(const ImVec2*)lua_touserdata(pl,2);
	const ImVec2 b = *(const ImVec2*)lua_touserdata(pl,3);
	const ImVec2 p = *(const ImVec2*)lua_touserdata(pl,4);
	return 0;
}

int ImGuiInputTextCallbackData_HasSelection(lua_State *pl)
{
	ImGuiInputTextCallbackData* self = (ImGuiInputTextCallbackData*)lua_touserdata(pl,1);
	return 1;
}

int igTextColored(lua_State *pl)
{
	const ImVec4 col = *(const ImVec4*)lua_touserdata(pl,1);
	const char* fmt = lua_tostring(pl,2);
	... ... = *(...*)lua_touserdata(pl,3);
	return 0;
}

int igIsItemVisible(lua_State *pl)
{
	return 1;
}

int igImAlphaBlendColors(lua_State *pl)
{
	ImU32 col_a = *(ImU32*)lua_touserdata(pl,1);
	ImU32 col_b = *(ImU32*)lua_touserdata(pl,2);
	return 1;
}

int ImGuiStorage_SetFloat(lua_State *pl)
{
	ImGuiStorage* self = (ImGuiStorage*)lua_touserdata(pl,1);
	ImGuiID key = *(ImGuiID*)lua_touserdata(pl,2);
	float val = *(float*)lua_touserdata(pl,3);
	return 0;
}

int igImFileRead(lua_State *pl)
{
	void* data = (void*)lua_touserdata(pl,1);
	ImU64 size = *(ImU64*)lua_touserdata(pl,2);
	ImU64 count = *(ImU64*)lua_touserdata(pl,3);
	ImFileHandle file = *(ImFileHandle*)lua_touserdata(pl,4);
	return 1;
}

int igIsAnyItemFocused(lua_State *pl)
{
	return 1;
}

int igIsDragDropPayloadBeingAccepted(lua_State *pl)
{
	return 1;
}

int ImGuiTableColumnSortSpecs_destroy(lua_State *pl)
{
	ImGuiTableColumnSortSpecs* self = (ImGuiTableColumnSortSpecs*)lua_touserdata(pl,1);
	return 0;
}

int igPushOverrideID(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 0;
}

int igIsItemDeactivatedAfterEdit(lua_State *pl)
{
	return 1;
}

int ImSpan_size_in_bytes(lua_State *pl)
{
	ImSpan* self = (ImSpan*)lua_touserdata(pl,1);
	return 1;
}

int ImDrawList_PathFillConvex(lua_State *pl)
{
	ImDrawList* self = (ImDrawList*)lua_touserdata(pl,1);
	ImU32 col = *(ImU32*)lua_touserdata(pl,2);
	return 0;
}

int igGetScrollMaxY(lua_State *pl)
{
	return 1;
}

int igIsMouseHoveringRect(lua_State *pl)
{
	const ImVec2 r_min = *(const ImVec2*)lua_touserdata(pl,1);
	const ImVec2 r_max = *(const ImVec2*)lua_touserdata(pl,2);
	bool clip = lua_toboolean(pl,3);
	return 1;
}

int igIsMousePosValid(lua_State *pl)
{
	const ImVec2* mouse_pos = (const ImVec2*)lua_touserdata(pl,1);
	return 1;
}

int igDebugHookIdInfo(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	ImGuiDataType data_type = *(ImGuiDataType*)lua_touserdata(pl,2);
	const void* data_id = (const void*)lua_touserdata(pl,3);
	const void* data_id_end = (const void*)lua_touserdata(pl,4);
	return 0;
}

int ImVector_destroy(lua_State *pl)
{
	ImVector* self = (ImVector*)lua_touserdata(pl,1);
	return 0;
}

int ImGuiContext_destroy(lua_State *pl)
{
	ImGuiContext* self = (ImGuiContext*)lua_touserdata(pl,1);
	return 0;
}

int igTableGetColumnCount(lua_State *pl)
{
	return 1;
}

int igImLinearSweep(lua_State *pl)
{
	float current = *(float*)lua_touserdata(pl,1);
	float target = *(float*)lua_touserdata(pl,2);
	float speed = *(float*)lua_touserdata(pl,3);
	return 1;
}

int ImGuiTabBar_GetTabOrder(lua_State *pl)
{
	ImGuiTabBar* self = (ImGuiTabBar*)lua_touserdata(pl,1);
	const ImGuiTabItem* tab = (const ImGuiTabItem*)lua_touserdata(pl,2);
	return 1;
}

int igDebugNodeDockNode(lua_State *pl)
{
	ImGuiDockNode* node = (ImGuiDockNode*)lua_touserdata(pl,1);
	const char* label = lua_tostring(pl,2);
	return 0;
}

int igLogToClipboard(lua_State *pl)
{
	int auto_open_depth = (int)lua_tonumber(pl,1);
	return 0;
}

int igTableGetColumnResizeID(lua_State *pl)
{
	const ImGuiTable* table = (const ImGuiTable*)lua_touserdata(pl,1);
	int column_n = (int)lua_tonumber(pl,2);
	int instance_no = (int)lua_tonumber(pl,3);
	return 1;
}

int igImTextCountUtf8BytesFromChar(lua_State *pl)
{
	const char* in_text = lua_tostring(pl,1);
	const char* in_text_end = lua_tostring(pl,2);
	return 1;
}

int igIsWindowHovered(lua_State *pl)
{
	ImGuiHoveredFlags flags = *(ImGuiHoveredFlags*)lua_touserdata(pl,1);
	return 1;
}

int ImGuiViewportP_GetMainRect(lua_State *pl)
{
	ImRect* pOut = (ImRect*)lua_touserdata(pl,1);
	ImGuiViewportP* self = (ImGuiViewportP*)lua_touserdata(pl,2);
	return 0;
}

int igPushFocusScope(lua_State *pl)
{
	ImGuiID id = *(ImGuiID*)lua_touserdata(pl,1);
	return 0;
}

int igDebugNodeTable(lua_State *pl)
{
	ImGuiTable* table = (ImGuiTable*)lua_touserdata(pl,1);
	return 0;
}

int igPushTextWrapPos(lua_State *pl)
{
	float wrap_local_pos_x = *(float*)lua_touserdata(pl,1);
	return 0;
}

int igGetCurrentContext(lua_State *pl)
{
	return 1;
}

int ImGuiMenuColumns_CalcNextTotalWidth(lua_State *pl)
{
	ImGuiMenuColumns* self = (ImGuiMenuColumns*)lua_touserdata(pl,1);
	bool update_offsets = lua_toboolean(pl,2);
	return 0;
}

