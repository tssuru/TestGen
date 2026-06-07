try:
    
    try:
        print(3, end="")
        print(7<8, end="")
        print(0, end="")
    except BaseException: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(4, end="")
    
except: print('error')
