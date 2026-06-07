try:
    
    try:
        print(3, end="")
        print(int("b0"), end="")
        print(7, end="")
    except TypeError: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
