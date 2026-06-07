try:
    
    try:
        print(0, end="")
        print(9<=9, end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
