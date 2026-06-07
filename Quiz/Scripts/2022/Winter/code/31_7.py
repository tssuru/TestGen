try:
    
    try:
        print(0, end="")
        print(int(4//3), end="")
        print(7, end="")
    except BaseException: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(6, end="")
    
except: print('error')
