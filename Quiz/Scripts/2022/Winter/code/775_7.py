try:
    
    try:
        print(8, end="")
        print(1<7, end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(7, end="")
    
except: print('error')
