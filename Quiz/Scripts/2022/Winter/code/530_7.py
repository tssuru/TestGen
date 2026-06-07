try:
    
    try:
        print(1, end="")
        print(int("5"), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
