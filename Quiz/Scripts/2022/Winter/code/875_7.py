try:
    
    try:
        print(5, end="")
        print(int(1//1), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(0, end="")
    finally:
        print(5, end="")
    
except: print('error')
