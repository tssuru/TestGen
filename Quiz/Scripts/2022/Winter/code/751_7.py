try:
    
    try:
        print(1, end="")
        print(int("a0"), end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(8, end="")
    
except: print('error')
