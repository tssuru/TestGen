try:
    
    try:
        print(1, end="")
        print(int(5//0), end="")
        print(5, end="")
    except BaseException: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
