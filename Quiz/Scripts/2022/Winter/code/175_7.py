try:
    
    try:
        print(9, end="")
        print(int("b1"), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except Exception: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
