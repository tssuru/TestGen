try:
    
    try:
        print(6, end="")
        print(9<=4, end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(5, end="")
    
except: print('error')
