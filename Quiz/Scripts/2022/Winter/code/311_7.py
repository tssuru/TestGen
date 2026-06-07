try:
    
    try:
        print(9, end="")
        print(int("b6"), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
