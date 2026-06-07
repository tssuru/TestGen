try:
    
    try:
        print(2, end="")
        print(int("d0"), end="")
        print(6, end="")
    except ValueError: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(2, end="")
    
except: print('error')
