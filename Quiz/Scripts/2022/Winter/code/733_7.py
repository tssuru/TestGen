try:
    
    try:
        print(3, end="")
        print(int("9"), end="")
        print(5, end="")
    except TypeError: 
        print(0, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(8, end="")
    
except: print('error')
