try:
    
    try:
        print(7, end="")
        print(int("d5"), end="")
        print(0, end="")
    except BaseException: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
