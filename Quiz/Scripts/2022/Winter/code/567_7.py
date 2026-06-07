try:
    
    try:
        print(7, end="")
        print(int("3"), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
