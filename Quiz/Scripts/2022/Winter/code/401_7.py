try:
    
    try:
        print(5, end="")
        print(1>0, end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(8, end="")
    finally:
        print(4, end="")
    
except: print('error')
