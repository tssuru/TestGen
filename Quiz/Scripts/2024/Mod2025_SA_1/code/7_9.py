try:
    a,b,c=2,9,7
    def h(a):
        a=5
        b-=2
        c=3
        return a+b+c
    
    a,b,c=0,4,5
    print(h(a),a,b,c)
except: print('error')
