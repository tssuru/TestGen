try:
    
    try:
        print(4, end="")
        print(6!=1, end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(2, end="")
    finally:
        print(8, end="")
    
except: print('error')
