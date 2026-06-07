try:
    
    try:
        print(4, end="")
        print(int("a6"), end="")
        print(8, end="")
    except Exception: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
