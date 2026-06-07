try:
    
    try:
        print(0, end="")
        print(int("a6"), end="")
        print(3, end="")
    except Exception: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
