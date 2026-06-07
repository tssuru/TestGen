try:
    
    try:
        print(1, end="")
        print(7<=1, end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(6, end="")
    finally:
        print(5, end="")
    
except: print('error')
