try:
    
    try:
        print(1, end="")
        print(int("b8"), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except Exception: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
