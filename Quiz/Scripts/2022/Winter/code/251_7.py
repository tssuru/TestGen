try:
    
    try:
        print(1, end="")
        print(int(8/0), end="")
        print(3, end="")
    except BaseException: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
