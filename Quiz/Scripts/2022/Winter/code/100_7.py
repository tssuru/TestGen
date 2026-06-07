try:
    
    try:
        print(5, end="")
        print(int("0"), end="")
        print(3, end="")
    except ValueError: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(7, end="")
    finally:
        print(9, end="")
    
except: print('error')
