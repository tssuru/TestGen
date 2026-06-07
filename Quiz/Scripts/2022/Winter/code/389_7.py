try:
    
    try:
        print(0, end="")
        print(int("d2"), end="")
        print(5, end="")
    except Exception: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(6, end="")
    finally:
        print(1, end="")
    
except: print('error')
