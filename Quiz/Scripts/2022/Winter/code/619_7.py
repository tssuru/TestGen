try:
    
    try:
        print(9, end="")
        print(int("0"), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except Exception: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(6, end="")
    
except: print('error')
