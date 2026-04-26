#pragma once
#include <Windows.h>

// Mirrors latest Offsets.hpp / FFlags.hpp from imtheo.lol (version-2e6461290a3541f5)
namespace offs {
    // Core pointers (updated)
    inline constexpr uintptr_t EnableLoadModule = 0x751fe08; // unchanged in recent dumps
    inline constexpr uintptr_t loadModule = EnableLoadModule;
    inline constexpr uintptr_t fakeDataModelPtr = 0x7b990f8;
    inline constexpr uintptr_t fakeDataModelToDataModel = 0x1d0;

    // Instance / general
    inline constexpr uintptr_t children = 0x78;           // ChildrenStart
    inline constexpr uintptr_t childrenEnd = 0x8;         // ChildrenEnd
    inline constexpr uintptr_t name = 0xb0;
    inline constexpr uintptr_t value = 0xd0;              // Misc::Value
    inline constexpr uintptr_t classDesc = 0x18;
    inline constexpr uintptr_t classDescToName = 0x8;     // Instance::ClassName

    // Scripts
    inline constexpr uintptr_t lscriptBc = 0x1a8;         // LocalScript / Script::ByteCode
    inline constexpr uintptr_t mscriptBc = 0x150;         // ModuleScript::ByteCode

    // Common properties
    inline constexpr uintptr_t Adornee = 0x108;           // Misc::Adornee (was 0xD0)
    inline constexpr uintptr_t Anchored = 0x2;            // PrimitiveFlags
    inline constexpr uintptr_t AnchoredMask = 0x2;        // same
    inline constexpr uintptr_t AnimationId = 0xd0;
    inline constexpr uintptr_t AttributeToNext = 0x58;
    inline constexpr uintptr_t AttributeToValue = 0x18;
    inline constexpr uintptr_t AutoJumpEnabled = 0x1d8;   // Humanoid (was 0x1DB)
    inline constexpr uintptr_t BanningEnabled = 0x14C;    // may need verification if still used
    inline constexpr uintptr_t BeamBrightness = 0x190;    // Beam::Brightness
    inline constexpr uintptr_t BeamColor = 0x120;         // unchanged
    inline constexpr uintptr_t BeamLightEmission = 0x19C; // Beam::LightEmission
    inline constexpr uintptr_t BeamLightInfuence = 0x1A0; // Beam::LightInfluence (typo in original: Influence)
    inline constexpr uintptr_t CFrame = 0xC0;             // Primitive::Rotation + Position logic
    inline constexpr uintptr_t Camera = 0x490;            // Workspace::CurrentCamera
    inline constexpr uintptr_t CameraMaxZoomDistance = 0x320; // Player
    inline constexpr uintptr_t CameraMinZoomDistance = 0x324;
    inline constexpr uintptr_t CameraMode = 0x328;        // Player
    inline constexpr uintptr_t CameraPos = 0x11C;         // Camera::Position
    inline constexpr uintptr_t CameraRotation = 0xF8;     // Camera::Rotation
    inline constexpr uintptr_t CameraSubject = 0xE8;
    inline constexpr uintptr_t CameraType = 0x158;
    inline constexpr uintptr_t CanCollide = 0x8;          // PrimitiveFlags
    inline constexpr uintptr_t CanCollideMask = 0x8;
    inline constexpr uintptr_t CanTouch = 0x10;           // PrimitiveFlags
    inline constexpr uintptr_t CanTouchMask = 0x10;
    inline constexpr uintptr_t CharacterAppearanceId = 0x2C8; // still valid in Player
    inline constexpr uintptr_t ClickDetectorMaxActivationDistance = 0x100;

    inline constexpr uintptr_t ClockTime = 0x1B8;         // Lighting
    inline constexpr uintptr_t CreatorId = 0x188;         // DataModel
    inline constexpr uintptr_t DataModelDeleterPointer = 0x7A1D390; // check if still needed
    inline constexpr uintptr_t DataModelPrimitiveCount = 0x440;
    inline constexpr uintptr_t DataModelToRenderView1 = 0x1d0;
    inline constexpr uintptr_t DataModelToRenderView2 = 0x8;
    inline constexpr uintptr_t DataModelToRenderView3 = 0x28;

    inline constexpr uintptr_t DecalTexture = 0x198;      // Textures::Decal_Texture
    inline constexpr uintptr_t Dimensions = 0xA60;        // VisualEngine
    inline constexpr uintptr_t DisplayName = 0x130;       // Player
    inline constexpr uintptr_t EvaluateStateMachine = 0x1dc; // Humanoid (updated)
    inline constexpr uintptr_t FFlagList = 0x782d1b8;     // FFlagOffsets::FFlagList::Pointer
    inline constexpr uintptr_t FFlagToValueGetSet = 0x30; // FFlagList::ToFlag
    inline constexpr uintptr_t FOV = 0x160;               // Camera::FieldOfView
    inline constexpr uintptr_t FogColor = 0xFC;
    inline constexpr uintptr_t FogEnd = 0x134;
    inline constexpr uintptr_t FogStart = 0x138;

    inline constexpr uintptr_t ForceNewAFKDuration = 0x1B8; // may be outdated
    inline constexpr uintptr_t FramePositionOffsetX = 0x51C; // GuiObject position logic
    inline constexpr uintptr_t FramePositionOffsetY = 0x524;
    inline constexpr uintptr_t FramePositionX = 0x518;
    inline constexpr uintptr_t FramePositionY = 0x520;
    inline constexpr uintptr_t FrameRotation = 0x188;
    inline constexpr uintptr_t FrameSizeOffsetX = 0x540;
    inline constexpr uintptr_t FrameSizeOffsetY = 0x544;
    inline constexpr uintptr_t FrameSizeX = 0x538;
    inline constexpr uintptr_t FrameSizeY = 0x53C;
    inline constexpr uintptr_t FrameVisible = 0x5B5;      // GuiObject::Visible

    inline constexpr uintptr_t GameId = 0x190;
    inline constexpr uintptr_t GameLoaded = 0x5F8;
    inline constexpr uintptr_t Gravity = 0x1D8;           // World::Gravity
    inline constexpr uintptr_t Health = 0x194;            // Humanoid
    inline constexpr uintptr_t HealthDisplayDistance = 0x198; // Humanoid (updated)
    inline constexpr uintptr_t HipHeight = 0x1a0;
    inline constexpr uintptr_t HumanoidDisplayName = 0xd0;
    inline constexpr uintptr_t HumanoidState = 0x898;
    inline constexpr uintptr_t HumanoidStateId = 0x20;
    inline constexpr uintptr_t InputObject = 0x100;       // MouseService

    inline constexpr uintptr_t InsetMaxX = 0x100;         // GuiBase2D / Viewport
    inline constexpr uintptr_t InsetMaxY = 0x104;
    inline constexpr uintptr_t InsetMinX = 0xF8;
    inline constexpr uintptr_t InsetMinY = 0xFC;

    inline constexpr uintptr_t InstanceAttributePointer1 = 0x48; // AttributeContainer
    inline constexpr uintptr_t InstanceAttributePointer2 = 0x18; // AttributeList
    inline constexpr uintptr_t InstanceCapabilities = 0x208;     // may need check

    inline constexpr uintptr_t JobEnd = 0xd0;
    inline constexpr uintptr_t JobId = 0x138;             // DataModel
    inline constexpr uintptr_t JobStart = 0xc8;
    inline constexpr uintptr_t Job_Name = 0x18;           // TaskScheduler::JobName
    inline constexpr uintptr_t JobsPointer = 0x0;         // TaskScheduler jobs

    inline constexpr uintptr_t JumpPower = 0x1b0;         // Humanoid
    inline constexpr uintptr_t LocalPlayer = 0x130;       // Player
    inline constexpr uintptr_t LocalScriptBytecodePointer = 0x10; // ByteCode::Pointer
    inline constexpr uintptr_t LocalScriptHash = 0x1b8;
    inline constexpr uintptr_t MaterialType = 0x246;      // Primitive::Material (check)
    inline constexpr uintptr_t MaxHealth = 0x1b4;
    inline constexpr uintptr_t MaxSlopeAngle = 0x1b8;
    inline constexpr uintptr_t MeshPartColor3 = 0x194;    // BasePart::Color3
    inline constexpr uintptr_t MeshPartTexture = 0x328;   // MeshPart::Texture (updated)
    inline constexpr uintptr_t ModelInstance = 0x398;     // Player

    inline constexpr uintptr_t ModuleScriptBytecodePointer = 0x10;
    inline constexpr uintptr_t ModuleScriptHash = 0x160;
    inline constexpr uintptr_t MoonTextureId = 0xe0;
    inline constexpr uintptr_t MousePosition = 0xec;
    inline constexpr uintptr_t MouseSensitivity = 0x7c387f0; // MouseService::SensitivityPointer (updated)
    inline constexpr uintptr_t MoveDirection = 0x158;
    inline constexpr uintptr_t NameDisplayDistance = 0x1bc;  // Humanoid (updated from 0x358)
    inline constexpr uintptr_t NameSize = 0x10;
    inline constexpr uintptr_t OnDemandInstance = 0x40;      // may be Instance::This or similar

    inline constexpr uintptr_t OutdoorAmbient = 0x108;
    inline constexpr uintptr_t Parent = 0x70;
    inline constexpr uintptr_t PartSize = 0x1b0;             // Primitive::Size
    inline constexpr uintptr_t Ping = 0xCC;                  // may need update
    inline constexpr uintptr_t PlaceId = 0x198;
    inline constexpr uintptr_t PlayerConfigurerPointer = 0x7b6e5a8; // updated
    inline constexpr uintptr_t PlayerMouse = 0x1158;         // Player::Mouse (updated)
    inline constexpr uintptr_t Position = 0xe4;              // Primitive
    inline constexpr uintptr_t Primitive = 0x148;            // BasePart
    inline constexpr uintptr_t PrimitiveValidateValue = 0x6;
    inline constexpr uintptr_t PrimitivesPointer1 = 0x3E0;   // check World::Primitives
    inline constexpr uintptr_t PrimitivesPointer2 = 0x248;   // World::Primitives (updated path)

    inline constexpr uintptr_t ProximityPromptActionText = 0xd0;
    inline constexpr uintptr_t ProximityPromptEnabled = 0x156;
    inline constexpr uintptr_t ProximityPromptGamepadKeyCode = 0x13c;
    inline constexpr uintptr_t ProximityPromptHoldDuraction = 0x140; // typo: HoldDuration
    inline constexpr uintptr_t ProximityPromptMaxActivationDistance = 0x148;
    inline constexpr uintptr_t ProximityPromptMaxObjectText = 0xf0;  // ObjectText

    inline constexpr uintptr_t ReadOnlyGravity = 0x9c0;      // Workspace (updated from 0x9B0)
    inline constexpr uintptr_t RenderJobToDataModel = 0x1c0; // RenderJob::RealDataModel
    inline constexpr uintptr_t RenderJobToFakeDataModel = 0x38;
    inline constexpr uintptr_t RenderJobToRenderView = 0x1d0;
    inline constexpr uintptr_t RequireBypass = 0x0;
    inline constexpr uintptr_t RigType = 0x1c8;
    inline constexpr uintptr_t RootPartR15 = 0x478;          // Humanoid::HumanoidRootPart
    inline constexpr uintptr_t RootPartR6 = 0x478;
    inline constexpr uintptr_t Rotation = 0xc0;              // Primitive
    inline constexpr uintptr_t RunContext = 0x148;           // may need verification
    inline constexpr uintptr_t Sandboxed = 0xC5;             // may need verification
    inline constexpr uintptr_t ScreenGuiEnabled = 0x4cc;     // GuiObject

    inline constexpr uintptr_t ScriptContext = 0x3f0;
    inline constexpr uintptr_t Sit = 0x1e0;                  // Humanoid
    inline constexpr uintptr_t SkyboxBk = 0x110;
    inline constexpr uintptr_t SkyboxDn = 0x140;
    inline constexpr uintptr_t SkyboxFt = 0x170;
    inline constexpr uintptr_t SkyboxLf = 0x1a0;
    inline constexpr uintptr_t SkyboxRt = 0x1d0;
    inline constexpr uintptr_t SkyboxUp = 0x200;
    inline constexpr uintptr_t SoundId = 0xe0;
    inline constexpr uintptr_t StarCount = 0x260;
    inline constexpr uintptr_t StringLength = 0x10;
    inline constexpr uintptr_t SunTextureId = 0x230;

    inline constexpr uintptr_t TagList = 0x0;                // may need update
    inline constexpr uintptr_t TaskSchedulerMaxFPS = 0xb0;
    inline constexpr uintptr_t TaskSchedulerPointer = 0x7c73d70;
    inline constexpr uintptr_t Team = 0x2a0;
    inline constexpr uintptr_t TeamColor = 0x364;            // Player::TeamColor (updated)
    inline constexpr uintptr_t TextLabelText = 0xdc0;        // GuiObject::Text (updated)
    inline constexpr uintptr_t TextLabelVisible = 0x5b5;
    inline constexpr uintptr_t Tool_Grip_Position = 0x4bc;   // Tool::Grip (updated)
    inline constexpr uintptr_t Transparency = 0xf0;          // BasePart
    inline constexpr uintptr_t UserId = 0x2c8;
    inline constexpr uintptr_t ValueGetSetToValue = 0xc0;    // FFlagList::ToValue
    inline constexpr uintptr_t Velocity = 0xf0;              // Primitive::AssemblyLinearVelocity
    inline constexpr uintptr_t ViewportSize = 0x2e8;         // Camera
    inline constexpr uintptr_t VisualEngine = 0x10;          // RenderView
    inline constexpr uintptr_t VisualEnginePointer = 0x7746018;
    inline constexpr uintptr_t VisualEngineToDataModel1 = 0xa40; // VisualEngine::FakeDataModel
    inline constexpr uintptr_t VisualEngineToDataModel2 = 0x1c0; // may vary
    inline constexpr uintptr_t WalkSpeed = 0x1d4;            // Humanoid::Walkspeed
    inline constexpr uintptr_t WalkSpeedCheck = 0x3bc;
    inline constexpr uintptr_t Workspace = 0x178;
    inline constexpr uintptr_t WorkspaceToWorld = 0x408;     // Workspace::World (updated)
    inline constexpr uintptr_t viewmatrix = 0x130;           // VisualEngine::ViewMatrix
}
