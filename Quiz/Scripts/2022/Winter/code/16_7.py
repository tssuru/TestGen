try:
    
    try:
        print(9, end="")
        print(int("8"), end="")
        print(5, end="")
    except TypeError: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
