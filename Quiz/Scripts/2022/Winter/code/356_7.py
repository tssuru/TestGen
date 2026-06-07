try:
    
    try:
        print(7, end="")
        print(int("b6"), end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except Exception: 
        print(8, end="")
    else:
        print(3, end="")
    finally:
        print(0, end="")
    
except: print('error')
