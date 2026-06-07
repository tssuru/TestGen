try:
    
    try:
        print(7, end="")
        print(int("0"), end="")
        print(4, end="")
    except Exception: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
