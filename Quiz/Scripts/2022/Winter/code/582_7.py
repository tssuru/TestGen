try:
    
    try:
        print(2, end="")
        print(3==3, end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
