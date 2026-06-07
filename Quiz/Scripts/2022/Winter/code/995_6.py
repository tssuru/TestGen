try:
    a,b,c=1,7,2
    def h(a):
        global c
        a*=1
        b=3
        c=4
        return a+b+c
    
    a,b,c=8,4,6
    print(h(a),a,b,c)
    
except: print('error')
