try:
    
    try:
        print(6, end="")
        print(6==9, end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
