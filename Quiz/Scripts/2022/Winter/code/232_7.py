try:
    
    try:
        print(0, end="")
        print(int("b6"), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except Exception: 
        print(0, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
