try:
    
    try:
        print(3, end="")
        print(4>7, end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
