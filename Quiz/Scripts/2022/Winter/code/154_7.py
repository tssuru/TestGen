try:
    
    try:
        print(5, end="")
        print(int("d0"), end="")
        print(8, end="")
    except TypeError: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(9, end="")
    
except: print('error')
