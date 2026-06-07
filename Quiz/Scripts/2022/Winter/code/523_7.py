try:
    
    try:
        print(5, end="")
        print(int("9"), end="")
        print(2, end="")
    except Exception: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(0, end="")
    finally:
        print(9, end="")
    
except: print('error')
