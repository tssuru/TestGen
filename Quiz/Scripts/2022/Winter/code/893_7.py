try:
    
    try:
        print(4, end="")
        print(int("b8"), end="")
        print(5, end="")
    except Exception: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(1, end="")
    finally:
        print(0, end="")
    
except: print('error')
