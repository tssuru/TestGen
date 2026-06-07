try:
    
    try:
        print(1, end="")
        print(int("0"), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
