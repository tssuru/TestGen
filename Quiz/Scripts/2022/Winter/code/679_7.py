try:
    
    try:
        print(9, end="")
        print(int("d8"), end="")
        print(2, end="")
    except TypeError: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(2, end="")
    
except: print('error')
