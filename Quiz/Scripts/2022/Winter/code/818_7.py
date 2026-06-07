try:
    
    try:
        print(8, end="")
        print(int("a5"), end="")
        print(2, end="")
    except Exception: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(3, end="")
    finally:
        print(0, end="")
    
except: print('error')
