try:
    a,b,c=9,5,7
    def h(a):
        global c
        a*=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=1,9,3
    print(h(a),a,b,c)
except: print('error')
