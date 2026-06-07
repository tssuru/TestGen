try:
    
    try:
        print(3, end="")
        print(int("0"), end="")
        print(8, end="")
    except Exception: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
