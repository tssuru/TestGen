try:
    
    try:
        print(9, end="")
        print(int("2"), end="")
        print(8, end="")
    except BaseException: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
