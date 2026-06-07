try:
    
    try:
        print(2, end="")
        print(int("0"), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(8, end="")
    
except: print('error')
