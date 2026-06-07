try:
    
    try:
        print(8, end="")
        print(int("1"), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
