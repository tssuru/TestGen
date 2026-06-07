try:
    
    try:
        print(8, end="")
        print(int("0"), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
