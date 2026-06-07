try:
    
    try:
        print(4, end="")
        print(int(3//0.0), end="")
        print(7, end="")
    except BaseException: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(5, end="")
    
except: print('error')
