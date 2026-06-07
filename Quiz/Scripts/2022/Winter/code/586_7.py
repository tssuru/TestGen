try:
    
    try:
        print(6, end="")
        print(int("d1"), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except Exception: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(6, end="")
    
except: print('error')
