try:
    
    try:
        print(8, end="")
        print(7<3, end="")
        print(0, end="")
    except BaseException: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(0, end="")
    finally:
        print(2, end="")
    
except: print('error')
